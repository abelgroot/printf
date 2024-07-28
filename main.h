#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int _putchar(char c);
void _flush_buffer(void);

int _printf(const char *format, ...);

int c_specifier(va_list args);
int s_specifier(va_list args);
int modulo_specifier(va_list args);

int d_specifier(va_list args);
int i_specifier(va_list args);

int u_specifier(va_list args);
int o_specifier(va_list args);
int x_specifier(va_list args);
int X_specifier(va_list args);

int b_specifier(va_list args);

int S_specifier(va_list args);

int p_specifier(va_list args);
int print_big_number(unsigned long n);

int print_number(int n);
int print_unsigned_number(unsigned int n);
int convert_and_print(unsigned int num, unsigned int base, const char *digits);
char *convert_to_binary(unsigned int num);
int print_binary_string(char *binary_str);
int print_hex_char(unsigned char c);

#endif /* MAIN_H */
