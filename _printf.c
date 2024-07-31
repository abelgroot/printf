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
	int padding_length = 0;
	unsigned int padding_direction = 0;
	int padding_digit = 0;
	char padding_char = ' ';

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

			padding_length = 0;
			padding_direction = 0;
			padding_digit = 0;
			padding_char = ' ';

			/* length padding direction*/
			while (*format == '-' || *format == '0')
			{
				if (*format == '-')
				{
					padding_direction = 1;
					padding_char = ' ';
				}
				else if (*format == '0' && padding_direction == 0)
				{
					padding_char = '0';
				}
				format++;
			}
			while (*format >= '0' && *format <= '9')
			{
				padding_length = (padding_length * 10) + (*format - '0');
				padding_digit++;
				format++;
			}
		
			if(padding_direction)
			{
				padding_length = padding_length * (-1);
			}
			if(padding_length)
				padding_length -= padding_digit;

			printed_chars += print_format(format, args, padding_length, padding_char);
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
int print_format(const char *format, va_list args, int padding_length, char padding_char)
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
			printed_chars += plus_non_custom_specifier(args,
				length_modifier, specifier);
			break;
		case ' ':
			printed_chars += space_non_custom_specifier(args,
				length_modifier, specifier);
			break;
		case '#':
			printed_chars += hash_flag_specifier(args, specifier, length_modifier);
			break;
		default:
			printed_chars += process_specifier(specifier, args, length_modifier, padding_length, padding_char);
			break;
	}
	return (printed_chars);
}
