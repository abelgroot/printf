#include "main.h"

/**
* S_specifier - a function that prints a string and non-printable characters.
* @args: input argument from our _printf function.
*
* Return: number of characters printed.
*/
int S_specifier(va_list args)
{
	char *str = va_arg(args, char *);
	int printed_chars = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			printed_chars += _putchar('\\');
			printed_chars += _putchar('x');
			printed_chars += print_hex_char((unsigned char)*str);
		}
		else
		{
			printed_chars += _putchar(*str);
		}
		str++;
		
	}
	return (printed_chars);
}

/**
* print_hex_char - a function that prints a character in hexadecimal format.
* @c: the character to print.
*
* Return: number of characters printed.
*/
int print_hex_char(unsigned char c)
{
	char *hex_digits = "0123456789ABCDEF";
	int printed_chars = 0;

	printed_chars += _putchar(hex_digits[(c >> 4) & 0xF]);
	printed_chars += _putchar(hex_digits[c & 0xF]);

	return (printed_chars);
}
