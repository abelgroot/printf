	#include "../main.h"
#include <stdio.h>
/**
* main - Entry point for testing flag specifiers.
*
* Return: Always 0.
*/
int main(void)
{
    
    _printf("Testingprinting reversed string  using 'r'custom specifier:\n");
	printf("Expected: mun\n");
	_printf("Result:   %r\n", "num");
	_printf("\n");

	return (0);
}
