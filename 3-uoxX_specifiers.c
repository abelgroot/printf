#include "main.h"

/**
* uoxX_specifier - Handles the 'u', 'o', 'x', 'X' specifiers.
* @args: Argument list.
* @specifier: Format specifier.
*
* Return: The number of characters printed.
*/
int uoxX_specifier(va_list args, char specifier)
{
	unsigned int num = va_arg(args, unsigned int);
	int printed_chars = 0;

	switch (specifier)
	{
		case 'u':
			printed_chars = print_unsigned_number(num);
			break;
		case 'o':
			printed_chars = convert_and_print(num, 8, "0123456789");
			break;
		case 'x':
			printed_chars = convert_and_print(num, 16, "0123456789abcdef");
			break;
		case 'X':
			printed_chars = convert_and_print(num, 16, "0123456789ABCDEF");
			break;
	}

	return (printed_chars);
}

/**
* print_unsigned_number - Prints an unsigned number.
* @n: The number to print.
*
* Return: The number of characters printed.
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
* convert_and_print - Converts a number to a specified base and prints it.
* @num: The number to convert.
* @base: The base to convert to.
* @digits: The characters used for the conversion.
*
* Return: The number of characters printed.
*/
int convert_and_print(unsigned int num, unsigned int base, const char *digits)
{
	int printed_chars = 0;
	char buffer[32];
	int i = 30;

	buffer[31] = '\0';
	if (num == 0)
	{
		buffer[30] = '0';
		i = 29;
	}
	while (num > 0)
	{
		buffer[i--] = digits[num % base];
		num /= base;
	}

	for (i++; buffer[i]; i++)
	{
		printed_chars += _putchar(buffer[i]);
	}

	return (printed_chars);
}

