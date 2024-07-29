#include "main.h"

/**
 * r_specifier - Prints a string in reverse
 * @args: A va_list containing the string to be printed
 *
 * Return: The number of characters printed
 */
int r_specifier(va_list args)
{
	char *end;
	char *str = va_arg(args, char *);
	int printed_chars = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	end = str;
	while (*end)
	{
		end++;
	}

	while (end != str)
	{
		end--;
		_putchar(*end);
		printed_chars++;
	}

	return (printed_chars);
}
