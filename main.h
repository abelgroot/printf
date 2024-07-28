#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

#ifndef NULL
#define NULL ((void *)0)
#endif /* NULL */

int c_specifier(va_list args);
int s_specifier(va_list args);
int modulo_specifier(va_list args);

int d_specifier(va_list args);
int i_specifier(va_list args);

int b_specifier(va_list args);
char *convert_to_binary(unsigned int num);
int print_binary_string(char *binary_str);
int S_specifier(va_list args);
int u_specifier(va_list args);
int o_specifier(va_list args);
int x_specifier(va_list args);
int X_specifier(va_list args);
int print_hex_char(unsigned int s);

int print_number(int);

int _putchar(char c);
void _flush_buffer(void);

int _printf(const char *format, ...);

#endif /* MAIN_H */
