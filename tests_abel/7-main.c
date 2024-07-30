#include "../main.h"
#include <stdio.h>
/**
* main - Entry point for testing flag specifiers.
*
* Return: Always 0.
*/
int main(void)
{
	int len = 0;
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
	printf("Expected: % d\n", num);
	_printf("Result:   % d\n", num);
	printf("Expected: % d\n", neg_num);
	_printf("Result:   % d\n", neg_num);
	_printf("\n");

	/* Test the '#' flag for 'o' specifier */
	_printf("Testing the '#' flag for 'o' specifier:\n");
	printf("Expected: %#o\n", num);
	_printf("Result:   %#o\n", num);
	_printf("\n");

	/* Test the '#' flag for 'x' specifier */
	_printf("Testing the '#' flag for 'x' specifier:\n");
	printf("Expected: %#x\n", num);
	_printf("Result:   %#x\n", num);
	_printf("\n");

	/* Test the '#' flag for 'X' specifier */
	_printf("Testing the '#' flag for 'X' specifier:\n");
	printf("Expected: %#X\n", num);
	_printf("Result:   %#X\n", num);
	_printf("\n");

  len = _printf("Signed positive with plus flag: %+d\n", 123);
  printf("Expected: Signed positive with plus flag: +123\n");
  printf("Length: %d\n\n", len);

  len = _printf("Signed positive with space flag: % d\n", 123);
  printf("Expected: Signed positive with space flag:  123\n");
  printf("Length: %d\n\n", len);

  len = _printf("Signed negative with space flag: % d\n", -123);
  printf("Expected: Signed negative with space flag: -123\n");
  printf("Length: \n");

  len = _printf("Octal with hash flag: %#o\n", 123);
  printf("Expected: Octal with hash flag: 0173\n");
  printf("Length: %d\n\n", len);

  len = _printf("Hexadecimal with hash flag: %#x\n", 123);
  printf("Expected: Hexadecimal with hash flag: 0x7b\n");
  printf("Length: %d\n\n", len);

  len = _printf("Hexadecimal with hash flag (uppercase): %#X\n", 123);
  printf("Expected: Hexadecimal with hash flag (uppercase): 0X7B\n");
  printf("Length: %d\n\n", len);

	return (0);
}
