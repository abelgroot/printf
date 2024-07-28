#include "main.h"

/**
 * _puts - Writes a string to stdout.
 * @str: The string to write.
 *
 * Return: The number of characters written.
 */
int _puts(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

