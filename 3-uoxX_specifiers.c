#include "main.h"

/**
* u_specifier - Handles the 'u' specifier.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int u_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_unsigned_number(num));
}

/**
* o_specifier - Handles the 'o' specifier.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int o_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 8, "0123456789"));
}

/**
* x_specifier - Handles the 'x' specifier.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int x_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 16, "0123456789abcdef"));
}

/**
* X_specifier - Handles the 'X' specifier.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int X_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 16, "0123456789ABCDEF"));
}

/**
* print_unsigned_number - Prints an unsigned number.
* @n: The number to print.
*
* Return: Number of characters printed.
*/
int print_unsigned_number(unsigned int n)
{
	int printed_chars = 0;

	if (n / 10)
		printed_chars += print_unsigned_number(n / 10);
	_putchar(n % 10 + '0');
	printed_chars++;
	return (printed_chars);
}

/**
* convert_and_print - Converts and prints a number in a given base.
* @num: The number to convert and print.
* @base: The base to convert to.
* @digits: The digits to use for conversion.
*
* Return: Number of characters printed.
*/
int convert_and_print(unsigned int num, unsigned int base, const char *digits)
{
	int printed_chars = 0;

	if (num / base)
		printed_chars += convert_and_print(num / base, base, digits);
	_putchar(digits[num % base]);
	printed_chars++;
	return (printed_chars);
}
