#include "main.h"

/**
 * R_specifier - Prints a string using ROT13 encryption
 * @args: A va_list containing the string to be printed
 *
 * Return: The number of characters printed
 */
int R_specifier(va_list args)
{
	char *s = va_arg(args, char *);
	int i, j;
	int printed_chars = 0;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				_putchar(datarot[j]);
				printed_chars++;
				break;
			}
		}
		if (j == 52)
		{
			_putchar(s[i]);
			printed_chars++;
		}
	}

	return (printed_chars);
}
