#include <stdio.h>
#include "../main.h"
#include "limits.h"
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    addr = (void *)0x7ffe637541f0;
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

    // Test the length modifiers
    _printf("Long integer:[%ld]\n", 1234567890123456789L);
    printf("Long integer:[%ld]\n", 1234567890123456789L);
    _printf("Long unsigned integer:[%lu]\n", 12345678901234567890UL);
    printf("Long unsigned integer:[%lu]\n", 12345678901234567890UL);
    _printf("Long octal:[%lo]\n", 12345678901234567890UL);
    printf("Long octal:[%lo]\n", 12345678901234567890UL);
    _printf("Long hex:[%lx, %lX]\n", 12345678901234567890UL, 12345678901234567890UL);
    printf("Long hex:[%lx, %lX]\n", 12345678901234567890UL, 12345678901234567890UL);

    _printf("Short integer:[%hd]\n", (short)32767);
    printf("Short integer:[%hd]\n", (short)32767);
    _printf("Short unsigned integer:[%hu]\n", (unsigned short)65535);
    printf("Short unsigned integer:[%hu]\n", (unsigned short)65535);
    _printf("Short octal:[%ho]\n", (unsigned short)65535);
    printf("Short octal:[%ho]\n", (unsigned short)65535);
    _printf("Short hex:[%hx, %hX]\n", (unsigned short)65535, (unsigned short)65535);
    printf("Short hex:[%hx, %hX]\n", (unsigned short)65535, (unsigned short)65535);

    // Test the flags
    _printf("Positive with plus:[%+d]\n", 123);
    printf("Positive with plus:[%+d]\n", 123);
    _printf("Positive with space:[% d]\n", 123);
    printf("Positive with space:[% d]\n", 123);
    _printf("Number with hash (octal):[%#o]\n", 123);
    printf("Number with hash (octal):[%#o]\n", 123);
    _printf("Number with hash (hex):[%#x, %#X]\n", 123, 123);
    printf("Number with hash (hex):[%#x, %#X]\n", 123, 123);

    return 0;
}
