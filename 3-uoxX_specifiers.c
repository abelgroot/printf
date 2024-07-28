#include "main.h"

/**
* u_specifier - a function that prints unsigned decimal.
* @args: input argument from our _printf function.
*
* Return: number of characters printed.
*/
int u_specifier(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_number(n));
}

/**
* o_specifier - a function that prints octal.
* @args: input argument from our _printf function.
*
* Return: number of characters printed.
*/
int o_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 8, "01234567"));
}

/**
* x_specifier - a function that prints hexadecimal with small letters.
* @args: input argument from our _printf function.
*
* Return: number of characters printed.
*/
int x_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 16, "0123456789abcdef"));
}

/**
* X_specifier - a function that prints hexadecimal with capital letters.
* @args: input argument from our _printf function.
*
* Return: number of characters printed.
*/
int X_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 16, "0123456789ABCDEF"));
}

/**
* print_unsigned_number - a function that prints an unsigned number.
* @n: the unsigned number to print.
*
* Return: number of characters printed.
*/
int print_unsigned_number(unsigned int n)
{
int printed_chars = 0;

	if (n / 10)
		printed_chars += print_unsigned_number(n / 10);

	printed_chars += _putchar((n % 10) + '0');

	return (printed_chars);
}

/**
* convert_and_print - Converts and prints a number in a specified base.
* @num: The number to convert and print.
* @base: The base to convert to.
* @digits: The digits to use for the conversion.
*
* Return: The number of characters printed.
*/
int convert_and_print(unsigned int num, unsigned int base, const char *digits)
{
	char buffer[32];
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
