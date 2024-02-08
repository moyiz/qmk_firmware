#!/bin/bash

if [[ $1 == "-h" || $1 == "--help" ]]; then
    cat <<EOF
combo.sh
A script to generate the necessary code for \`combos.c\` or \`keymap.c\` from a simple
combos text file.

Each row sets a separate combo.
Hash-prefixed (\`#\`) and blank lines are ignored.

Example:

$ cat example.combos
KC_Q KC_W KC_ESC
KC_A KC_S KC_D LCTL(KC_LALT)
$ ./combo.sh example.combos | tee /path/to/combos.c
#include "example.h"

enum combos {
  COMBO_1,
  COMBO_2,
  COMBO_COUNT,
};

const uint16_t COMBO_LEN = COMBO_COUNT;

const uint16_t PROGMEM kc_q_w[] = { KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM kc_a_s_d[] = { KC_A, KC_S, KC_D, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_1] = COMBO(kc_q_w, KC_ESC),
  [COMBO_2] = COMBO(kc_a_s_d, LCTL(KC_LALT)),
};
EOF
    exit 1
fi

# Read combos file
readarray -t combos < <(cat $1 | grep -v -e '^$' -e '^#')

# Create enum and COMBO_LEN
echo //COMBO:START
# echo -e "#include \"$(basename ${1%%.combos}).h\"\n"
echo enum combos {
for i in $(seq 0 $((${#combos[@]} - 1))); do
    echo "  COMBO_$((i + 1)),"
done
cat <<EOF
  COMBO_COUNT,
};

const uint16_t COMBO_LEN = COMBO_COUNT;

EOF

# Iterate through combos and create PROGMEM variables
declare -a names actions
for i in $(seq 0 $((${#combos[@]} - 1))); do
    keys=$(echo ${combos[$i]} | rev | cut -d' ' -f2- | rev | sed 's/ /, /g')
    names[$i]=$(echo ${keys,,} | sed 's/ [^_]*_/_/g' | tr -dc '[:alnum:]_')
    echo "const uint16_t PROGMEM ${names[$i]}[] = { ${keys}, COMBO_END};"
    actions[$i]=$(echo ${combos[$i]} | rev | cut -d' ' -f1 | rev)
done

# Create `key_combos`
echo
echo "combo_t key_combos[COMBO_COUNT] = {"
for i in $(seq 0 $((${#combos[@]} - 1))); do
    echo "  [COMBO_$((i + 1))] = COMBO(${names[$i]}, ${actions[$i]}),"
done
cat <<EOF
};
EOF

echo //COMBO:END