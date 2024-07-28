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
		case 'd':
			printed_chars += d_specifier(args);
			break;
		case 'i':
			printed_chars += i_specifier(args);
			break;
		case 'b':
			printed_chars += b_specifier(args);
			break;
		case 'u':
			printed_chars += u_specifier(args);
			break;
		case 'o':
			printed_chars += o_specifier(args);
			break;
		case 'x':
			printed_chars += x_specifier(args);
			break;
		case 'X':
			printed_chars += X_specifier(args);
			break;
		case 'S':
			printed_chars += S_specifier(args);
			break;
		case 'p':
			printed_chars += p_specifier(args);
			break;
		case '+':
			if(((format + 1) == 'd') || (format[i+1] =='i'))
			{
				while(format[i+2])
					{
						printed_chars += plus_non_custom_specifier(args);
						i++;
						continue;
						
					}
			}
			else
				_puts("'+' flag should only be used with 'd' or 'i'");
			break;
		case ' ':
			if((format[i+1] == 'd') || (format[i+1] =='i'))
			{
				while(format[i+2])
					{
						printed_chars += space_non_custom_specifier(args);
						i++;
						continue;
						
					}
			}
			else
				_puts("'space' flag should only be used with 'd' or 'i'");
			break;
		case '#':
			if((format[i+1] == 'x'))
			{
				while(format[i+2])
					{
						printed_chars += hash_x_non_custom_specifier(args);
						i++;
						continue;
						
					}
			}
			else if((format[i+1] == 'X'))
			{
				while(format[i+2])
					{
						printed_chars += hash_X_non_custom_specifier(args);
						i++;
						continue;
						
					}
			}
			else
				_puts("'space' flag should only be used with 'd' or 'i'");
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

