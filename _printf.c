#include "main.h"

/**
 * print_format - processes a format specifier.
 * @format: the format specifier.
 * @args: the list of arguments.
 *
 * Return: the number of characters printed.
 */
int print_format(const char format, va_list args)
{
	int printed_chars = 0;

	switch (format)
	{
		case 'c':
			printed_chars += c_specifier(args);
			break;
		case 's':
			printed_chars += s_specifier(args);
			break;
		case '%':
			printed_chars += modulo_specifier(args);
			break;
		default:
			printed_chars += _putchar('%');
			printed_chars += _putchar(format);
			break;
	}
	return (printed_chars);
}

/**
 * _printf - function that produces output according to a format.
 * @format: is a character string composed of zero or more directives.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, printed_chars = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			printed_chars += print_format(format[i], args);
		}
		else
		{
			printed_chars += _putchar(format[i]);
		}
	}

	va_end(args);
	return (printed_chars);
}

