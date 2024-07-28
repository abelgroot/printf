#include "main.h"

/**
* plus_flag_specifier - Handles the plus flag for specifiers.
* @args: Argument list.
* @specifier: Format specifier.
*
* Return: The number of characters printed.
*/
int plus_flag_specifier(va_list args, char specifier)
{
	int printed_chars = 0;
	int n = va_arg(args, int);

	if (specifier == 'd' || specifier == 'i')
	{
		if (n >= 0)
		{
			printed_chars += _putchar('+');
			printed_chars += print_number(n);
		}
		else
		{
			printed_chars += print_number(n);
		}
	}
	return (printed_chars);
}

/**
* space_flag_specifier - Handles the space flag for specifiers.
* @args: Argument list.
* @specifier: Format specifier.
*
* Return: The number of characters printed.
*/

int space_flag_specifier(va_list args, char specifier)
{
	int printed_chars = 0;
	int n = va_arg(args, int);

	if (specifier == 'd' || specifier == 'i')
	{
		if (n >= 0)
		{
			printed_chars += _putchar(' ');
			printed_chars += print_number(n);
		}
		else
		{
			printed_chars += print_number(n);
		}
	}
	return (printed_chars);
}

/**
* hash_flag_specifier - Handles the hash flag for specifiers.
* @args: Argument list.
* @specifier: Format specifier.
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
		printed_chars += _putchar('0');
		printed_chars += _putchar('x');
		printed_chars += x_specifier(args);
	}
	else if (specifier == 'X')
	{
		printed_chars += _putchar('0');
		printed_chars += _putchar('X');
		printed_chars += X_specifier(args);
	}
	return (printed_chars);
}
