#include "main.h"

/**
* print_format - Prints formatted output.
* @format: The format string.
* @args: The argument list.
*
* Return: The number of characters printed.
*/
int print_format(const char *format, va_list args)
{
	int i, printed_chars = 0;
	char specifier;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
			return (-1);
			}
			specifier = format[i];
			printed_chars += process_specifier(specifier, args);
		}
		else
		{
			printed_chars += _putchar(format[i]);
		}
	}
	return (printed_chars);
}

/**
* _printf - Produces output according to a format.
* @format: The format string.
*
* Return: The number of characters printed.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars;

	va_start(args, format);
	printed_chars = print_format(format, args);
	va_end(args);

	_flush_buffer();

	return (printed_chars);
}

/**
* process_specifier - Processes a format specifier.
* @specifier: The format specifier.
* @args: The argument list.
*
* Return: The number of characters printed.
*/
int process_specifier(char specifier, va_list args)
{
	int printed_chars = 0;
	int plus_flag = 0, space_flag = 0, hash_flag = 0;

	while (specifier == '+' || specifier == ' ' || specifier == '#')
	{
		if (specifier == '+')
			plus_flag = 1;
		else if (specifier == ' ')
			space_flag = 1;
		else if (specifier == '#')
			hash_flag = 1;

		specifier = va_arg(args, int);
	}

	switch (specifier)
	{
		case 'c':
			printed_chars += c_specifier(args);
			break;
		case 's':
			printed_chars += s_specifier(args);
			break;
		case 'd':
		case 'i':
			if (plus_flag)
				printed_chars += plus_non_custom_specifier(args);
			else if (space_flag)
				printed_chars += space_non_custom_specifier(args);
			else
				printed_chars += i_specifier(args);
			break;
		case 'u':
			printed_chars += u_specifier(args);
			break;
		case 'o':
			if (hash_flag)
				printed_chars += hash_flag_specifier(args, 'o');
			else
				printed_chars += o_specifier(args);
			break;
		case 'x':
			if (hash_flag)
				printed_chars += hash_flag_specifier(args, 'x');
			else
				printed_chars += x_specifier(args);
			break;
		case 'X':
			if (hash_flag)
				printed_chars += hash_flag_specifier(args, 'X');
			else
				printed_chars += X_specifier(args);
			break;
		case 'b':
			printed_chars += b_specifier(args);
			break;
		case 'S':
			printed_chars += S_specifier(args);
			break;
		case 'p':
			printed_chars += p_specifier(args);
			break;
		case '%':
			printed_chars += _putchar('%');
			break;
		default:
			printed_chars += _putchar('%');
			printed_chars += _putchar(specifier);
		break;
	}
	return (printed_chars);
}
