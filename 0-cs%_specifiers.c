#include "main.h"

/**
 * c_specifier - function to print a character
 * @args: input argument from the function
 *
 * Return: number of characters printed (always 1)
 */
int c_specifier(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * s_specifier - function to print a string
 * @args: input argument from the function
 *
 * Return: number of characters printed
 */
int s_specifier(va_list args)
{
	char *str = va_arg(args, char *);
	int printed_chars = 0;

	if (str == NULL)
	{
		str = "(null)";
		_putchar('0');
	}
	while (*str)
	{
		_putchar(*str);
		printed_chars++;
		str++;
	}

	return (printed_chars);
}

/**
 * modulo_specifier - function to print a modulo
 * @args: input argument from the function (unused)
 *
 * Return: number of characters printed (always 1)
 */
int modulo_specifier(va_list args)
{
	(void)args;

	return (_putchar('%'));
}