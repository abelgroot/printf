#include "main.h"

/**
* uoxX_specifier - Handles unsigned, octal, and hex specifiers
* @args: The list of arguments
* @specifier: The specifier character
*
* Return: Number of characters printed
*/
int uoxX_specifier(va_list args, char specifier)
{
	unsigned int num = va_arg(args, unsigned int);

	switch (specifier)
	{
		case 'u':
			return (print_unsigned_number(num));
		case 'o':
			return (convert_and_print(num, 8, "0123456789"));
		case 'x':
			return (convert_and_print(num, 16, "0123456789abcdef"));
		case 'X':
			return (convert_and_print(num, 16, "0123456789ABCDEF"));
		default:
			return (0);
	}
}

/**
* print_unsigned_number - Prints an unsigned number
* @n: The number to print
*
* Return: Number of characters printed
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
* convert_and_print - Converts and prints a number in a given base
* @num: The number to convert and print
* @base: The base to convert to
* @digits: The digits to use for conversion
*
* Return: Number of characters printed
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
