::KEYPAD::
PIN_FUNCTION    PIN_NUMBER
ROW_1           PA2
ROW_2           PA7
ROW_3           PA6
ROW_4           PA5
COL_1           PA4
COL_2           PA3
COL_3           PA1
COL_4           PA0

PERIPHERAL      BASE_ADDRESS
GPIOA           0x48000000
RCC             0x40021000

REG_FUNC        ADDRESS
RCC_AHB2ENR     0x4002104C
GPIOA_MODER     0x48000000
GPIOA_PUPDR     0x4800000C
GPIOA_IDR       0x48000010
GPIOA_ODR       0x48000014

::DISPLAY::
PIN_FUNCTION    PIN_NUMBER    OUTPUT/INPUT
RS              PA12          OUTPUT
RW              PB0           OUTPUT
E               PB7           OUTPUT
D4              PB6           OUTPUT
D5              PB1           OUTPUT
D6              PC14          OUTPUT
D7              PC15          OUTPUT/INPUT

PERIPHERAL      BASE_ADDRESS
RCC             0x40021000
GPIOA           0x48000000
GPIOB           0x48000400
GPIOC           0x48000800

REG_FUNC        ADDRESS
RCC_AHB2ENR     0x4002104C

GPIOA_MODER     0x48000000
GPIOA_PUPDR     0x4800000C
GPIOA_IDR       0x48000010
GPIOA_ODR       0x48000014

GPIOB_MODER     0x48000400
GPIOB_IDR       0x48000410
GPIOB_ODR       0x48000414

GPIOC_MODER     0x48000800
GPIOC_IDR       0x48000810
GPIOC_ODR       0x48000814
