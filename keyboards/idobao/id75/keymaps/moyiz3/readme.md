# moyiz3  Keymap

To generate the combos section in the keymap, edit `moyiz.combos` and run:
```sh
sed -i '/COMBO:START/,/COMBO:END/d' keymap.c && ./combo.sh moyiz.combos >> keymap.c
```