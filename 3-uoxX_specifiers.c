#include "main.h"
#include <stdlib.h>

/**
* u_specifier - Handles the %u specifier
* @args: The arguments list
*
* Return: The number of characters printed
*/
int u_specifier(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_number(n));
}

/**
* o_specifier - Handles the %o specifier
* @args: The arguments list
*
* Return: The number of characters printed
*/
int o_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 8, "0123456789"));
}

/**
* x_specifier - Handles the %x specifier
* @args: The arguments list
*
* Return: The number of characters printed
*/
int x_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 16, "0123456789abcdef"));
}

/**
* X_specifier - Handles the %X specifier
* @args: The arguments list
*
* Return: The number of characters printed
*/
int X_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 16, "0123456789ABCDEF"));
}

/**
* print_unsigned_number - Prints an unsigned number
* @n: The number to print
*
* Return: The number of characters printed
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
* convert_and_print - Converts a number to a different base and prints it
* @num: The number to convert
* @base: The base to convert to
* @digits: The characters representing digits in the base
*
* Return: The number of characters printed
*/
int convert_and_print(unsigned int num, unsigned int base, const char *digits)
{
	char buffer[50];
	int i = 0, printed_chars = 0;

	if (num == 0)
		return (_putchar('0'));

	while (num > 0)
	{
		buffer[i++] = digits[num % base];
		num /= base;
	}

	while (i--)
		printed_chars += _putchar(buffer[i]);

	return (printed_chars);
}
