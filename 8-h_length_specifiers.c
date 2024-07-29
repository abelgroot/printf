#include "main.h"

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
