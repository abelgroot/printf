#include "main.h"

/**
* ld_specifier - Handles the 'ld' and 'li' specifiers
* @args: The argument list
*
* Return: The number of characters printed
*/
int ld_specifier(va_list args)
{
	long int num = va_arg(args, long int);

	return (print_long_number(num));
}

/**
* lu_specifier - Handles the 'lu' specifier
* @args: The argument list
*
* Return: The number of characters printed
*/
int lu_specifier(va_list args)
{
	unsigned long int num = va_arg(args, unsigned long int);

	return (print_unsigned_long_number(num));
}

/**
* lo_specifier - Handles the 'lo' specifier
* @args: The argument list
*
* Return: The number of characters printed
*/
int lo_specifier(va_list args)
{
	unsigned long int num = va_arg(args, unsigned long int);

	return (convert_and_print(num, 8, "01234567"));
}

/**
* lx_specifier - Handles the 'lx' specifier
* @args: The argument list
*
* Return: The number of characters printed
*/
int lx_specifier(va_list args)
{
	unsigned long int num = va_arg(args, unsigned long int);

	return (convert_and_print(num, 16, "0123456789abcdef"));
}

/**
* lX_specifier - Handles the 'lX' specifier
* @args: The argument list
*
* Return: The number of characters printed
*/
int lX_specifier(va_list args)
{
	unsigned long int num = va_arg(args, unsigned long int);

	return (convert_and_print(num, 16, "0123456789ABCDEF"));
}

/**
* hd_specifier - Handles the 'hd' and 'hi' specifiers
* @args: The argument list
*
* Return: The number of characters printed
*/
int hd_specifier(va_list args)
{
	short int num = va_arg(args, int);

	return (print_number(num));
}

/**
* hu_specifier - Handles the 'hu' specifier
* @args: The argument list
*
* Return: The number of characters printed
*/
int hu_specifier(va_list args)
{
	unsigned short int num = va_arg(args, int);

	return (print_unsigned_number(num));
}

/**
* ho_specifier - Handles the 'ho' specifier
* @args: The argument list
*
* Return: The number of characters printed
*/
int ho_specifier(va_list args)
{
	unsigned short int num = va_arg(args, int);

	return (convert_and_print(num, 8, "01234567"));
}

/**
* hx_specifier - Handles the 'hx' specifier
* @args: The argument list
*
* Return: The number of characters printed
*/
int hx_specifier(va_list args)
{
	unsigned short int num = va_arg(args, int);

	return (convert_and_print(num, 16, "0123456789abcdef"));
}

/**
* hX_specifier - Handles the 'hX' specifier
* @args: The argument list
*
* Return: The number of characters printed
*/
int hX_specifier(va_list args)
{
	unsigned short int num = va_arg(args, int);

	return (convert_and_print(num, 16, "0123456789ABCDEF"));
}

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
	char buffer[21];  /* Long enough to hold an unsigned long int string representation */
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
