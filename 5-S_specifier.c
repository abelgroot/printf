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
			printed_chars += _putchar('0');
			printed_chars += convert_and_print(*str, 16, "0123456789ABCDEFG");
		}
		else
		{
			printed_chars += _putchar(*str);
		}
		str++;
	}
	return (printed_chars);
}