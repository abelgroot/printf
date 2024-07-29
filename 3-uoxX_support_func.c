#include "main.h"

/**
* print_unsigned_number - Prints an unsigned number.
* @n: The number to print.
*
* Return: Number of characters printed.
*/
int print_unsigned_number(unsigned int n)
{
	int printed_chars = 0;

	if (n / 10)
		printed_chars += print_unsigned_number(n / 10);
	_putchar(n % 10 + '0');
	printed_chars++;
	return (printed_chars);
}

/**
* convert_and_print - Converts and prints a number in a given base.
* @num: The number to convert and print.
* @base: The base to convert to.
* @digits: The digits to use for conversion.
*
* Return: Number of characters printed.
*/
int convert_and_print(unsigned int num, unsigned int base, const char *digits)
{
	int printed_chars = 0;

	if (num / base)
		printed_chars += convert_and_print(num / base, base, digits);
	_putchar(digits[num % base]);
	printed_chars++;
	return (printed_chars);
}
