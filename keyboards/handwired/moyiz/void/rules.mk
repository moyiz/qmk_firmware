MCU = STM32F401
BOARD = BLACKPILL_STM32_F401
BOOTLOADER = stm32-dfu

BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes           # Enable N-Key Rollover
SPLIT_KEYBOARD = yes
KEYBOARD_SHARED_EP = yes
COMBO_ENABLE = yes

# EEPROM_DRIVER = i2c
SERIAL_DRIVER = usart
OPT_DEFS += -DSTM32_DMA_REQUIRED=TRUE

SRC += combos.c
