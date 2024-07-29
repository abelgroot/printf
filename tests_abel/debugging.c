#include "../main.h"
#include <stdio.h>

int main(void)
{
    int num = 42;
    int neg_num = -42;

    /* Test the ' ' (space) flag */
	_printf("Testing the ' ' (space) flag:\n");
	printf("Expected: % d\n", num);
	_printf("Result:   % d\n", num);
	printf("Expected: % d\n", neg_num);
	_printf("Result:   % d\n", neg_num);
	_printf("\n");
    return (0);
}
