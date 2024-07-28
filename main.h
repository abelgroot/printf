#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include   <stdlib.h>

#ifndef NULL
#define NULL ((void *)0)
#endif /* NULL */

int c_specifier(va_list args);
int s_specifier(va_list args);
int modulo_specifier(va_list args);

int print_number(int);
int _putchar(char c);

int _printf(const char *format, ...);

#endif /* MAIN_H */
