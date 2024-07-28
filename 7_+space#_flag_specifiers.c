#include "main.h"

/**
* plus_non_custom_specifier - Handles the '+' flag for non-custom specifiers.
* @args: The argument list.
*
* Return: The number of characters printed.
*/
int plus_non_custom_specifier(va_list args)
{
	int k = va_arg(args, int);
	int printed_chars = 0;

	if (k >= 0)
	{
		_putchar('+');
		printed_chars += print_number(k);
		printed_chars += 1;
	}
	else
	{
		printed_chars += print_number(k);
		printed_chars += 1;
	}
	return (printed_chars);
}

/**
* space_non_custom_specifier - Handles the ' ' flag for non-custom specifiers.
* @args: The argument list.
*
* Return: The number of characters printed.
*/
int space_non_custom_specifier(va_list args)
{
	int k = va_arg(args, int);
	int printed_chars = 0;

	if (k >= 0)
	{
		_putchar(' ');
		printed_chars += print_number(k);
		printed_chars += 1;
	}
	else
	{
		printed_chars += print_number(k);
		printed_chars += 1;
	}
	return (printed_chars);
}

/**
* hash_flag_specifier - Handles the '#' flag for 'o', 'x', and 'X' specifiers.
* @args: The argument list.
* @specifier: The specifier character.
*
* Return: The number of characters printed.
*/
int hash_flag_specifier(va_list args, char specifier)
{
	int printed_chars = 0;

	if (specifier == 'o')
	{
		printed_chars += _putchar('0');
		printed_chars += o_specifier(args);
	}
	else if (specifier == 'x')
	{
		printed_chars += _puts("0x");
		printed_chars += x_specifier(args);
	}
	else if (specifier == 'X')
	{
		printed_chars += _puts("0X");
		printed_chars += X_specifier(args);
	}
	return (printed_chars);
}
