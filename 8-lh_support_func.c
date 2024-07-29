#include "main.h"

/**
 * print_long_number - Prints a long integer number
 * @n: The long integer number
 *
 * Return: The number of characters printed
 */
int print_long_number(long int n)
{
	int printed_chars = 0;
	char buffer[21];  /* Long enough to hold a long int string representation */
	char *ptr = &buffer[20];
	int is_negative = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	*ptr = '\0';

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	while (n != 0)
	{
		*--ptr = (n % 10) + '0';
		n /= 10;
	}

	if (is_negative)
	{
		*--ptr = '-';
	}

	while (*ptr != '\0')
	{
		_putchar(*ptr++);
		printed_chars++;
	}

	return (printed_chars);
}

/**
* print_unsigned_long_number - Prints an unsigned long integer number
* @n: The unsigned long integer number
*
* Return: The number of characters printed
*/
	int print_unsigned_long_number(unsigned long int n)
{
	int printed_chars = 0;
	char buffer[21];
	char *ptr = &buffer[20];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	*ptr = '\0';

	while (n != 0)
	{
		*--ptr = (n % 10) + '0';
		n /= 10;
	}

	while (*ptr != '\0')
	{
		_putchar(*ptr++);
		printed_chars++;
	}

	return (printed_chars);
}
