#include "main.h"

/**
* u_specifier - Handles the 'u' specifier.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int u_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_unsigned_number(num));
}

/**
* o_specifier - Handles the 'o' specifier.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int o_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 8, "0123456789"));
}

/**
* x_specifier - Handles the 'x' specifier.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int x_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 16, "0123456789abcdef"));
}

/**
* X_specifier - Handles the 'X' specifier.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int X_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (convert_and_print(num, 16, "0123456789ABCDEF"));
}
