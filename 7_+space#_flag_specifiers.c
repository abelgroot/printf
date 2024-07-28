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
		printed_chars += 1;
	}
	printed_chars += print_number(k);
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
		printed_chars += 1;
	}
	printed_chars += print_number(k);
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
		_putchar('0');
		printed_chars += 1;
		printed_chars += uoxX_specifier(args, 'o');
	}
	else if (specifier == 'x')
	{
		_puts("0x");
		printed_chars += 2;
		printed_chars += uoxX_specifier(args, 'x');
	}
	else if (specifier == 'X')
	{
		_puts("0X");
		printed_chars += 2;
		printed_chars += uoxX_specifier(args, 'X');
	}
	return (printed_chars);
}
