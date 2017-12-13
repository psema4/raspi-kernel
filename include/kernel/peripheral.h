#ifndef PERIPHERAL_H
#define PERIPHERAL_H


#ifdef MODEL_1
#define PERIPHERAL_BASE 0x20000000
#else
#define PERIPHERAL_BASE 0x3F000000
#endif

#define PERIPHERAL_LENGTH 0x01000000

#define FRAMEBUFFER_OFFSET 0xB880
#define UART0_OFFSET 0x201000
#define GPIO_OFFSET 0x200000

#endif
