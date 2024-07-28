#include <stdio.h>
#include "../main.h"
/**
* main - Entry point for testing flag specifiers.
*
* Return: Always 0.
*/
int main(void)
{
    
    _printf("Testing printing rotated string   using 'R 'custom specifier:\n");
	printf("Expected _for rotate_: ebgngr\n");
	_printf("Result:   %R\n", "rotate");
	_printf("\n");

	return (0);
}
