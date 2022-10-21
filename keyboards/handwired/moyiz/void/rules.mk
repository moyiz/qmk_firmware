# MCU name
MCU = STM32F401
BOARD = BLACKPILL_STM32_F401

# Bootloader selection
BOOTLOADER = stm32-dfu
# BOOTLOADER = tinyuf2

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
STENO_ENABLE = no
SPLIT_KEYBOARD = yes
KEYBOARD_SHARED_EP = yes
COMBO_ENABLE = yes

# EEPROM_DRIVER = i2c
SERIAL_DRIVER = usart
OPT_DEFS += -DSTM32_DMA_REQUIRED=TRUE

SRC += combos.c