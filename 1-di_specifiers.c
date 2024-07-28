#include "main.h"
/**
* print_number - prints an integer.
* @n: integer to print.
*
* Return: number of characters printed.
**/

int print_number(long n)
{
	int printed_chars = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		printed_chars++;
	}
	if (n / 10)
		printed_chars += print_number(n / 10);
	_putchar(n % 10 + '0');
	printed_chars++;
	return (printed_chars);
}

/**
* d_specifier - function to print an integer.
* @args: input argument from the function.
*
* Return: number of characters printed.
**/
int d_specifier(va_list args)
{
	long n = va_arg(args, long);

	return (print_number(n));
}

/**
* i_specifier - function to print an integer (same as d_specifier).
* @args: input argument from the function.
*
* Return: number of characters printed.
**/
int i_specifier(va_list args)
{
	return (d_specifier(args));
}
