#include "main.h"

/**
* print_format - Prints formatted output
* @format: The format string
* @args: The argument list
*
* Return: The number of characters printed
*/
int print_format(const char *format, va_list args)
{
	int i, printed_chars = 0;
	char specifier;
	char length_modifier = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
		if (format[i] == 'l' || format[i] == 'h')
		{
			length_modifier = format[i];
			i++;
		}
		specifier = format[i];
		if (specifier == '+')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				specifier = format[i];
				printed_chars += plus_non_custom_specifier(args);
				i++;
				continue;
			}
		}
		if (specifier == ' ')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				specifier = format[i];
				printed_chars += space_non_custom_specifier(args);
				i++;
				continue;
			}
		}
		if (specifier == '#')
		{
			if (format[i + 1] == 'x' || format[i + 1] == 'X' || format[i + 1] == 'o')
			{
				specifier = format[i + 1];
				printed_chars += hash_flag_specifier(args, specifier);
				i++;
				continue;
			}
		}
		printed_chars += process_specifier(specifier, args, length_modifier);
	}
	else
	{
		printed_chars += _putchar(format[i]);
	}
	}	
	return (printed_chars);
}

/**
* _printf - Produces output according to a format
* @format: The format string
*
* Return: The number of characters printed
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
* @length_modifier: length modifier l or h
*
* Return: The number of characters printed.
*/
int process_specifier(char specifier, va_list args, char length_modifier)
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
			else if (length_modifier == 'l')
				printed_chars += ld_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += hd_specifier(args);
			else
				printed_chars += i_specifier(args);
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
			if (hash_flag)
				printed_chars += hash_flag_specifier(args, 'o');
			else if (length_modifier == 'l')
				printed_chars += lo_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += ho_specifier(args);
			else
				printed_chars += o_specifier(args);
			break;
		case 'x':
			if (hash_flag)
				printed_chars += hash_flag_specifier(args, 'x');
			else if (length_modifier == 'l')
				printed_chars += lx_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += hx_specifier(args);
			else
				printed_chars += x_specifier(args);
			break;
		case 'X':
			if (hash_flag)
				printed_chars += hash_flag_specifier(args, 'X');
			if (length_modifier == 'l')
				printed_chars += lX_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += hX_specifier(args);
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
		case 'r':
			printed_chars += r_specifier(args);
			break;
		default:
			printed_chars += _putchar('%');
			printed_chars += _putchar(specifier);
			break;
	}
	return (printed_chars);
}
