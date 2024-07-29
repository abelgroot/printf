#include "main.h"

/**
* o_flag_case_handler - handle x flags.
* @length_modifier: length modifier input
* @args: va_list argument input
*
* Return: number of charcter printed.
*/
int o_flag_case_handler(char length_modifier, va_list args)
{
	int printed_chars = 0;

	_putchar('0');
	printed_chars++;
	if (length_modifier == 'l')
		printed_chars += lo_specifier(args);
	else if (length_modifier == 'h')
		printed_chars += ho_specifier(args);
	else
		printed_chars += convert_and_print(va_arg(args, unsigned int),
			8, "01234567");

	return (printed_chars);
}

/**
* x_flag_case_handler - handle x flags.
* @length_modifier: length modifier input
* @args: va_list argument input
*
* Return: number of charcter printed.
*/
int x_flag_case_handler(char length_modifier, va_list args)
{
	int printed_chars = 0;

	_putchar('0');
	_putchar('x');
	printed_chars += 2;
	if (length_modifier == 'l')
		printed_chars += lx_specifier(args);
	else if (length_modifier == 'h')
		printed_chars += hx_specifier(args);
	else
		printed_chars += convert_and_print(va_arg(args, unsigned int),
		16, "0123456789abcdef");

	return (printed_chars);
}

/**
* X_flag_case_handler - handle x flags.
* @length_modifier: length modifier input
* @args: va_list argument input
*
* Return: number of charcter printed.
*/
int X_flag_case_handler(char length_modifier, va_list args)
{
	int printed_chars = 0;

	_putchar('0');
	_putchar('X');
	printed_chars += 2;
	if (length_modifier == 'l')
		printed_chars += lX_specifier(args);
	else if (length_modifier == 'h')
		printed_chars += hX_specifier(args);
	else
		printed_chars += convert_and_print(va_arg(args, unsigned int),
		16, "0123456789ABCDEF");

	return (printed_chars);
}
