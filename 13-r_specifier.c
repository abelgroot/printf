#include "main.h"

int r_specifier(va_list args)
{
    char *revstr  = va_arg(args, char *);
    char rev = revstr[0];
	int counter = 0;
	int i, printed_chars = 0;


	while (revstr[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = revstr[i];
		revstr[i] = revstr[counter];
		revstr[counter] = rev;
		printed_chars++;
	}
	return (printed_chars);
}
