#include "main.h"

int print_format(const char *format, va_list args)
{
	int printed_chars = 0;
	int flag_plus = 0, flag_space = 0, flag_hash = 0;
	int i = 0;

	while (format[i] == '+' || format[i] == ' ' || format[i] == '#')
	{
		if (format[i] == '+')
			flag_plus = 1;
		else if (format[i] == ' ')
			flag_space = 1;
		else if (format[i] == '#')
			flag_hash = 1;
		i++;
	}

	char specifier = format[i];

	if (flag_plus && (specifier == 'd' || specifier == 'i'))
		printed_chars += plus_flag_specifier(args, specifier);
	else if (flag_space && (specifier == 'd' || specifier == 'i'))
		printed_chars += space_flag_specifier(args, specifier);
	else if (flag_hash && (specifier == 'x'
			|| specifier == 'X' || specifier == 'o'))
		printed_chars += hash_flag_specifier(args, specifier);
	else
	{
		switch (specifier)
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
			case 'i':
				printed_chars += d_specifier(args);
				break;
			case 'b':
				printed_chars += b_specifier(args);
				break;
			case 'u':
			case 'o':
			case 'x':
			case 'X':
				printed_chars += uoxX_specifier(args, specifier);
				break;
			case 'S':
				printed_chars += S_specifier(args);
				break;
			case 'p':
				printed_chars += p_specifier(args);
				break;
			default:
				printed_chars += _putchar('%');
				printed_chars += _putchar(specifier);
			break;
		}
	}

	return (printed_chars);
}
