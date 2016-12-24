#ifndef ASM_H
#define ASM_H

#include <stdint.h>

// macros for enabling and disabling interrupts
#define enable()	asm("sti");
#define disable()	asm("cli");

// inb instruction
inline uint8_t inb (uint16_t port)
{
	uint8_t val;
	asm volatile ("inb %0, %1" : "=a"(val): "Nd"(port));
	return val;
}

// outb instruction
inline void outb (uint16_t port, uint8_t val)
{
	asm volatile ("outb %1, %0" : : "a"(val), "Nd"(port));
}

#endif