#include "main.h"
#include <stdlib.h>

/**
* print_unsigned_number - prints an unsigned number
* @n: the number to be printed
*
* Return: the number of characters printed
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
* u_specifier - a function that prints an unsigned decimal
* @args: input argument from our _printf function
*
* Return: number of characters printed
*/
int u_specifier(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_number(n));
}

/**
* convert_to_base - converts a number to a string in a given base
* @num: the number to be converted
* @base: the base to convert to
* @digits: the digits used in the base
*
* Return: the converted string
*/
char *convert_to_base(unsigned int num, int base, const char *digits)
{
	char *str;
	int len = 0;
	unsigned int temp = num;

	while (temp > 0)
	{
		len++;
		temp /= base;
	}

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);

	str[len] = '\0';

	for (int i = len - 1; i >= 0; i--)
	{
		str[i] = digits[num % base];
		num /= base;
	}

	return (str);
}

/**
* print_base_string - prints a string with leading zeros handled
* @str: the string to be printed
*
* Return: the number of characters printed
*/
int print_base_string(char *str)
{
	int printed_chars = 0;
	int leading_zero = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != '0')
			leading_zero = 0;
		if (!leading_zero)
			printed_chars += _putchar(str[i]);
	}

	return (printed_chars);
}

/**
* o_specifier - a function that prints an octal number
* @args: input argument from our _printf function
*
* Return: number of characters printed
*/
int o_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *octal_str;
	int printed_chars;

	if (num == 0)
	{
		return (_putchar('0'));
	}

	octal_str = convert_to_base(num, 8, "0123456789");
	if (octal_str == NULL)
		return (-1);

	printed_chars = print_base_string(octal_str);
	free(octal_str);

	return (printed_chars);
}

/**
* x_specifier - a function that prints a hexadecimal number with small letters
* @args: input argument from our _printf function
*
* Return: number of characters printed
*/
int x_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *hex_str;
	int printed_chars;

	if (num == 0)
	{
		return (_putchar('0'));
	}

	hex_str = convert_to_base(num, 16, "0123456789abcdef");
	if (hex_str == NULL)
		return (-1);

	printed_chars = print_base_string(hex_str);
	free(hex_str);

	return (printed_chars);
}

/**
* X_specifier - a function that prints a hexadecimal
* number with capital letters
* @args: input argument from our _printf function
*
* Return: number of characters printed
*/
int X_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *hex_str;
	int printed_chars;

	if (num == 0)
	{
		return (_putchar('0'));
	}

	hex_str = convert_to_base(num, 16, "0123456789ABCDEF");
	if (hex_str == NULL)
		return (-1);

	printed_chars = print_base_string(hex_str);
	free(hex_str);

	return (printed_chars);
}
