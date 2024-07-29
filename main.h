#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);
void _flush_buffer(void);
int _puts(const char *str);
int print_format(const char *format, va_list args);
int process_specifier(char specifier, va_list args, char length_modifier);

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
int u_specifier(va_list args);
int o_specifier(va_list args);
int x_specifier(va_list args);
int X_specifier(va_list args);
int print_unsigned_number(unsigned int n);
int convert_and_print(unsigned int num, unsigned int base, const char *digits);

/* Custom specifiers */
int S_specifier(va_list args);
int print_hex_char(unsigned char c);
int r_specifier(va_list args);

/* Pointer specifier */
int p_specifier(va_list args);
int print_big_number(unsigned long n);

/* Flag specifiers */
int plus_non_custom_specifier(va_list args, char length_modifier, char specifier);
int space_non_custom_specifier(va_list args, char length_modifier, char specifier);
int hash_flag_specifier(va_list args, char specifier, char length_modifier);

/* Length modifiers */
int ld_specifier(va_list args);
int lu_specifier(va_list args);
int lo_specifier(va_list args);
int lx_specifier(va_list args);
int lX_specifier(va_list args);
int hd_specifier(va_list args);
int hu_specifier(va_list args);
int ho_specifier(va_list args);
int hx_specifier(va_list args);
int hX_specifier(va_list args);
int print_long_number(long n);
int print_unsigned_long_number(unsigned long n);


#endif /* MAIN_H */
