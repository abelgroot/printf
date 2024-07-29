#include "main.h"

int R_specifier(va_list args)
{
    char *s = va_arg(args, char *);
	int i;
	int j;
    int printed_chars = 0;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
                         

		}
	}
    printed_chars += _putchar(*s);

    return (printed_chars);
    
}