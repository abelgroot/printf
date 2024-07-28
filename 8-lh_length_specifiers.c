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
