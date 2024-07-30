#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/* _printf file functions */
int _printf(const char *format, ...);
int print_format(const char *format, va_list args);

/* process file functions */
int process_specifier(char specifier, va_list args, char length_modifier, int padding_length);
int uoxX_switch_handler(char length_modifier, char specifier, va_list args);
int di_switch_handler(char length_modifier, va_list args);
int csm_switch_handler(char specifier, va_list args);

/* switch case handler */
int di_case_handler(char length_modifier, va_list args);
int u_case_handler(char length_modifier, va_list args);
int o_case_handler(char length_modifier, va_list args);
int x_case_handler(char length_modifier, va_list args);
int X_case_handler(char length_modifier, va_list args);

/* printing to output stream */
int _putchar(char c);
void _flush_buffer(void);
int _puts(const char *str);

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
int r_specifier(va_list args);
int R_specifier(va_list args);

/* Pointer specifier */
int p_specifier(va_list args);
int S_specifier(va_list args);
int print_big_number(unsigned long n);
int print_hex_char(unsigned char c);

/* Flag specifiers */
int plus_non_custom_specifier(va_list args,
char length_modifier, char specifier);
int space_non_custom_specifier(va_list args,
char length_modifier, char specifier);
int hash_flag_specifier(va_list args, char specifier, char length_modifier);
int plus_print_number(int n);
int space_print_number(int n);
int o_flag_case_handler(char length_modifier, va_list args);
int x_flag_case_handler(char length_modifier, va_list args);
int X_flag_case_handler(char length_modifier, va_list args);

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
