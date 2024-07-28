#include "main.h"
#include   <stdlib.h>

/**
 * u_specifier - a function that print unsinged decimal
 * @args: input argument from our _printf function.
 *
 * Return: number of character printed.
 */

int u_specifier(va_list args)
{
	int n = va_arg(args, int);

	return (print_number(n));
}

/**
 * o_specifier - a function that print octadecimal
 * @args: input argument from our _printf function.
 *
 * Return: number of character printed.
 */

int o_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *octal_str;
	int printed_chars = 0;
	int i, len = 0;
	unsigned int temp = num;
	int leading_zero;

	if (num == 0)
	{
		printed_chars += _putchar('0');
		return (printed_chars);
	}

	while (temp > 0)
	{
		len++;
		temp /= 8;
	}

	octal_str = malloc(len + 1);
	if (octal_str == NULL)
		return (-1);

	octal_str[len] = '\0';

	for (i = len - 1; i >= 0; i--)
	{
		octal_str[i] = (num % 8) + '0';
		num /= 8;
	}

	leading_zero = 1;
	for (i = 0; i < len; i++)
	{
		if (octal_str[i] != '0')
			leading_zero = 0;
		if (!leading_zero)
			printed_chars += _putchar(octal_str[i]);
	}

	free(octal_str);

	return (printed_chars);
}

/**
 * x_specifier - a function that print hexadecimal
 * with small letters.
 * @args: input argument from our _printf function.
 *
 * Return: number of character printed.
 */

int x_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *hex_str;
	int printed_chars = 0;
	int i, len = 0;
	unsigned int temp = num;
	int leading_zero;

	const char hex_digits[] = "0123456789abcdef";

	if (num == 0)
	{
		printed_chars += _putchar('0');
		return (printed_chars);
	}

	while (temp > 0)
	{
		len++;
		temp /= 16;
	}
	hex_str = malloc(len + 1);
	if (hex_str == NULL)
		return (-1);

	hex_str[len] = '\0';

	for (i = len - 1; i >= 0; i--)
	{
		hex_str[i] = hex_digits[(num % 16)];
		num /= 16;
	}

	leading_zero = 1;
	for (i = 0; i < len; i++)
	{
		if (hex_str[i] != '0')
			leading_zero = 0;
		if (!leading_zero)
			printed_chars += _putchar(hex_str[i]);
	}

	free(hex_str);

	return (printed_chars);
}

/**
 * X_specifier - a function that print hexadecimal
 * with capital letters.
 * @args: input argument from our _printf function.
 *
 * Return: number of character printed.
 */

int X_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *HEX_str;
	int printed_chars = 0;
	int i, len = 0;
	unsigned int temp = num;
	int leading_zero;

	const char HEX_digits[] = "0123456789ABCDEF";

	if (num == 0)
	{
		printed_chars += _putchar('0');
		return (printed_chars);
	}

	while (temp > 0)
	{
		len++;
		temp /= 16;
	}
 /*21, ,,5 - 0*/
	HEX_str = malloc(len + 1);
	if (HEX_str == NULL)
		return (-1);

	HEX_str[len] = '\0';

	for (i = len - 1; i >= 0; i--)
	{
		HEX_str[i] = HEX_digits[(num % 16)];
		num /= 16;
	}

	leading_zero = 1;
	for (i = 0; i < len; i++)
	{
		if (HEX_str[i] != '0')
			leading_zero = 0;
		if (!leading_zero)
			printed_chars += _putchar(HEX_str[i]);
	}

	free(HEX_str);

	return (printed_chars);
}
