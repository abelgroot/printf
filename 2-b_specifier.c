#include "main.h"
#include <stdlib.h>

/**
* b_specifier - Converts an unsigned int to binary and prints it.
* @args: Argument list.
*
* Return: The number of characters printed.
*/
int b_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *binary_str;
	int printed_chars;

	if (num == 0)
		return (_putchar('0'));

	binary_str = convert_to_binary(num);
	if (binary_str == NULL)
	return (-1);

	printed_chars = print_binary_string(binary_str);
	free(binary_str);

	return (printed_chars);
}

/**
* convert_to_binary - Converts an unsigned int to a binary string.
* @num: The number to convert.
*
* Return: The binary string.
*/
char *convert_to_binary(unsigned int num)
{
	char *binary_str;
	int len = 0;
	unsigned int temp = num;

	while (temp > 0)
	{
		len++;
		temp /= 2;
	}

	binary_str = malloc(len + 1);
	if (binary_str == NULL)
		return (NULL);

	binary_str[len] = '\0';
	for (int i = len - 1; i >= 0; i--)
	{
		binary_str[i] = (num % 2) + '0';
		num /= 2;
	}

	return (binary_str);
}

/**
* print_binary_string - Prints a binary string without leading zeros.
* @binary_str: The binary string to print.
*
* Return: The number of characters printed.
*/
int print_binary_string(char *binary_str)
{
	int printed_chars = 0;
	int leading_zero = 1;

	for (int i = 0; binary_str[i] != '\0'; i++)
	{
		if (binary_str[i] != '0')
			leading_zero = 0;
		if (!leading_zero)
			printed_chars += _putchar(binary_str[i]);
	}

	return (printed_chars);
}
