#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);
void _flush_buffer(void);
int print_format(const char *format, va_list args);
int process_specifier(char specifier, va_list args);

/* Character and string specifiers */
int c_specifier(va_list args);
int s_specifier(va_list args);
int modulo_specifier(va_list args);

/* Integer specifiers */
int d_specifier(va_list args);
int i_specifier(va_list args);
int print_number(int n);

/* Binary specifier */
int b_specifier(va_list args);
char *convert_to_binary(unsigned int num);
int print_binary_string(char *binary_str);

/* Unsigned, octal, hex specifiers */
int uoxX_specifier(va_list args, char specifier);
int print_unsigned_number(unsigned int n);
int convert_and_print(unsigned int num, unsigned int base, const char *digits);

/* Custom specifiers */
int S_specifier(va_list args);
int print_hex_char(unsigned char c);

/* Pointer specifier */
int p_specifier(va_list args);
int print_big_number(unsigned long n);

/* Flag specifiers */
int plus_non_custom_specifier(va_list args);
int space_non_custom_specifier(va_list args);
int hash_flag_specifier(va_list args, char specifier);

#endif /* MAIN_H */
