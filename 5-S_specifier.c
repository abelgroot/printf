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
		if ((unsigned char)*str < 32 || (unsigned char)*str >= 127)
		{
			printed_chars += _putchar('\\');
			printed_chars += _putchar('x');
<<<<<<< HEAD
=======
			printed_chars += (convert_and_print((unsigned int)*str, 16, "0123456789ABCDEF"));
		}
>>>>>>> refs/remotes/origin/main
			printed_chars += convert_and_print((unsigned int)*str, 16, "0123456789ABCDEF");
    }
		else
		{
			printed_chars += _putchar(*str);
		}
		str++;
	}
	return (printed_chars);
}
