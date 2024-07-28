#include "main.h"

/**
* main - Entry point for testing flag specifiers.
*
* Return: Always 0.
*/
int main(void)
{
	int num = 42;
	int neg_num = -42;

	/* Test the '+' flag */
	_printf("Testing the '+' flag:\n");
	_printf("Expected: %+d\n", num);
	_printf("Result:   %+d\n", num);
	_printf("Expected: %+d\n", neg_num);
	_printf("Result:   %+d\n", neg_num);
	_printf("\n");

	/* Test the ' ' (space) flag */
	_printf("Testing the ' ' (space) flag:\n");
	_printf("Expected: % d\n", num);
	_printf("Result:   % d\n", num);
	_printf("Expected: % d\n", neg_num);
	_printf("Result:   % d\n", neg_num);
	_printf("\n");

	/* Test the '#' flag for 'o' specifier */
	_printf("Testing the '#' flag for 'o' specifier:\n");
	_printf("Expected: %#o\n", num);
	_printf("Result:   %#o\n", num);
	_printf("\n");

	/* Test the '#' flag for 'x' specifier */
	_printf("Testing the '#' flag for 'x' specifier:\n");
	_printf("Expected: %#x\n", num);
	_printf("Result:   %#x\n", num);
	_printf("\n");

	/* Test the '#' flag for 'X' specifier */
	_printf("Testing the '#' flag for 'X' specifier:\n");
	_printf("Expected: %#X\n", num);
	_printf("Result:   %#X\n", num);
	_printf("\n");

	return (0);
}
