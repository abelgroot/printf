#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * S_specifier - Prints a string with special handling
 * for non-printable characters
 *
 * @args: Variable argument list
 * Return: Number of characters printed
 */
int S_specifier(va_list args)
{
	char *str = va_arg(args, char *);
	int printed_chars = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			printed_chars += 2;
			if (*str < 16)
			{
				_putchar('0');
				printed_chars++;
			}
			printed_chars += print_hex_char((unsigned char)*str);
		}
		else
		{
			_putchar(*str);
			printed_chars++;
		}
		str++;
	}

	return (printed_chars);
}

/**
 * print_hex_char - Prints a character in hexadecimal format
 * @s: Character to print in hex
 * Return: Number of characters printed
 */
int print_hex_char(unsigned int s)
{
	int printed_chars = 0;
	char hex_digits[] = "0123456789ABCDEF";

	if (s < 16)
	{
		printed_chars += _putchar(hex_digits[s]);
	}
	else
	{
		printed_chars += print_hex_char(s / 16);
		printed_chars += _putchar(hex_digits[s % 16]);
	}

	return (printed_chars);
}
