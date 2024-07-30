#include "main.h"

/**
 * plus_non_custom_specifier - Handles the plus flag
 * @args: The argument list
 * @length_modifier: The length modifier
 * @specifier: The format specifier
 * Return: The number of characters printed
 */
int plus_non_custom_specifier(va_list args,
	char length_modifier, char specifier)
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
			printed_chars += process_specifier(specifier, args, length_modifier, 0);
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
int space_non_custom_specifier(va_list args,
	char length_modifier, char specifier)
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
			printed_chars += process_specifier(specifier, args, length_modifier, 0);
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
			printed_chars += o_flag_case_handler(length_modifier, args);
			break;
		case 'x':
			printed_chars += x_flag_case_handler(length_modifier, args);
			break;
		case 'X':
			printed_chars += X_flag_case_handler(length_modifier, args);
			break;
		default:
			printed_chars += process_specifier(specifier, args, length_modifier, 0);
			break;
	}
	return (printed_chars);
}
