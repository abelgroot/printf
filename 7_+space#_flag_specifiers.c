#include "main.h"

/**
 * plus_non_custom_specifier - Handles the plus flag
 * @args: The argument list
 * @length_modifier: The length modifier
 * @specifier: The format specifier
 * Return: The number of characters printed
 */
int plus_non_custom_specifier(va_list args, char length_modifier, char specifier)
{
	int printed_chars = 0;

	switch (specifier)
	{
		case 'd':
		case 'i':
			if (length_modifier == 'l')
				printed_chars += plus_print_number(va_arg(args, long int));
			else if (length_modifier == 'h')
				printed_chars += plus_print_number((short) va_arg(args, int));
			else
				printed_chars += plus_print_number(va_arg(args, int));
			break;
		default:
			printed_chars += process_specifier(specifier, args, length_modifier);
			break;
	}
	return (printed_chars);
}

/**
 * plus_print_number - Prints a number with a plus sign if positive
 * @n: The number to print
 * Return: The number of characters printed
 */
int plus_print_number(int n)
{
	if (n >= 0)
		_putchar('+');
	return (print_number(n) + (n >= 0 ? 1 : 0));
}

/**
 * space_non_custom_specifier - Handles the space flag
 * @args: The argument list
 * @length_modifier: The length modifier
 * @specifier: The format specifier
 * Return: The number of characters printed
 */
int space_non_custom_specifier(va_list args, char length_modifier, char specifier)
{
	int printed_chars = 0;

	switch (specifier)
	{
		case 'd':
		case 'i':
			if (length_modifier == 'l')
				printed_chars += space_print_number(va_arg(args, long int));
			else if (length_modifier == 'h')
				printed_chars += space_print_number((short) va_arg(args, int));
			else
				printed_chars += space_print_number(va_arg(args, int));
			break;
		default:
			printed_chars += process_specifier(specifier, args, length_modifier);
			break;
	}
	return (printed_chars);
}

/**
 * space_print_number - Prints a number with a space if positive
 * @n: The number to print
 * Return: The number of characters printed
 */
int space_print_number(int n)
{
	if (n >= 0)
		_putchar(' ');
	return (print_number(n) + (n >= 0 ? 1 : 0));
}

/**
 * hash_flag_specifier - Handles the hash flag
 * @args: The argument list
 * @specifier: The format specifier
 * @length_modifier: The length modifier
 * Return: The number of characters printed
 */
int hash_flag_specifier(va_list args, char specifier, char length_modifier)
{
	int printed_chars = 0;

	switch (specifier)
	{
		case 'o':
			_putchar('0');
			printed_chars++;
			if (length_modifier == 'l')
				printed_chars += lo_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += ho_specifier(args);
			else
				printed_chars += convert_and_print(va_arg(args, unsigned int),
						8, "01234567");
			break;
		case 'x':
			_putchar('0');
			_putchar('x');
			printed_chars += 2;
			if (length_modifier == 'l')
				printed_chars += lx_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += hx_specifier(args);
			else
				printed_chars += convert_and_print(va_arg(args, unsigned int),
						16, "0123456789abcdef");
			break;
		case 'X':
			_putchar('0');
			_putchar('X');
			printed_chars += 2;
			if (length_modifier == 'l')
				printed_chars += lX_specifier(args);
			else if (length_modifier == 'h')
				printed_chars += hX_specifier(args);
			else
				printed_chars += convert_and_print(va_arg(args, unsigned int),
						16, "0123456789ABCDEF");
			break;
		default:
			printed_chars += process_specifier(specifier, args, length_modifier);
			break;
	}
	return (printed_chars);
}
