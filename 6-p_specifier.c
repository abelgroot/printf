#include "main.h"

/**
* p_specifier - Prints an address.
* @args: Argument list.
*
* Return: The number of characters printed.
*/
int p_specifier(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long addr = (unsigned long)ptr;

	if (addr == 0)
		return (_putchar('(') + _putchar('n') +
			_putchar('i') + _putchar('l') + _putchar(')'));

	return (_putchar('0') + _putchar('x') + print_big_number(addr));
}

/**
* print_big_number - Prints an unsigned long number in hexadecimal.
* @n: The number to print.
*
* Return: The number of characters printed.
*/
int print_big_number(unsigned long n)
{
	int printed_chars = 0;
	const char *digits = "0123456789abcdef";

	if (n / 16)
		printed_chars += print_big_number(n / 16);

	_putchar(digits[n % 16]);
	printed_chars++;
	return (printed_chars);
}

