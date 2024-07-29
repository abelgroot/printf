#include "main.h"

/**
* _printf - Produces output according to a format.
* @format: The format string.
*
* Return: The number of characters printed.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			printed_chars += print_format(format, args);
			if (*format == ' ' || *format == '#' || *format == '+')
			{
				format++;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}

	_flush_buffer();
	va_end(args);

	return (printed_chars);
}

/**
* print_format - Processes a format specifier.
* @format: The format string.
* @args: The argument list.
*
* Return: The number of characters printed.
*/
int print_format(const char *format, va_list args)
{
	int printed_chars = 0;
	char specifier;
	char flag = '\0';
	char length_modifier = '\0';

	/* Handling flags */
	if (*format == '+' || *format == ' ' || *format == '#')
	{
		flag = *format;
		format++;
	}

	/* Handling length modifiers */
	if (*format == 'l' || *format == 'h')
	{
		length_modifier = *format;
		format++;
	}

	specifier = *format;

	switch (flag)
	{
		case '+':
			printed_chars += plus_non_custom_specifier(args, length_modifier, specifier);
			break;
		case ' ':
			printed_chars += space_non_custom_specifier(args, length_modifier, specifier);
			break;
		case '#':
			printed_chars += hash_flag_specifier(args, specifier, length_modifier);
			break;
		default:
			printed_chars += process_specifier(specifier, args, length_modifier);
			break;
	}
	return (printed_chars);
}


/**
* process_specifier - Processes a specifier with optional length modifier.
* @specifier: The specifier character.
* @args: The argument list.
* @length_modifier: The length modifier character.
*
* Return: The number of characters printed.
*/
int process_specifier(char specifier, va_list args, char length_modifier)
{
	int printed_chars = 0;

	switch (specifier)
	{
		case 'd':
		case 'i':
			if (length_modifier == 'l')
				printed_chars += ld_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += hd_specifier(args);
			else
				printed_chars += d_specifier(args);
			break;
		case 'u':
			if (length_modifier == 'l')
				printed_chars += lu_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += hu_specifier(args);
			else
				printed_chars += u_specifier(args);
			break;
		case 'o':
			if (length_modifier == 'l')
				printed_chars += lo_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += ho_specifier(args);
			else
				printed_chars += o_specifier(args);
			break;
		case 'x':
			if (length_modifier == 'l')
				printed_chars += lx_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += hx_specifier(args);
			else
				printed_chars += x_specifier(args);
			break;
		case 'X':
			if (length_modifier == 'l')
				printed_chars += lX_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += hX_specifier(args);
			else
				printed_chars += X_specifier(args);
			break;
		case 's':
			printed_chars += s_specifier(args);
			break;
		case 'c':
			printed_chars += c_specifier(args);
			break;
		case 'b':
			printed_chars += b_specifier(args);
			break;
		case 'p':
			printed_chars += p_specifier(args);
			break;
		case 'S':
			printed_chars += S_specifier(args);
			break;
		case 'r':
			printed_chars += r_specifier(args);
			break;
case 'R':
			printed_chars += R_specifier(args);
			break;
		default:
		case '%':
			printed_chars += _putchar('%');
			break;
		default:
			_putchar('%');
			_putchar(specifier);
			printed_chars += 2;
			break;
	}
	return (printed_chars);
}
