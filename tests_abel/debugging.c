#include "../main.h"
#include <stdio.h>

int main(void)
{
    int num = 42;
    int neg_num = -42;

    /* Test the ' ' (space) flag */
	_printf("% d\n", num);
	_printf("% d\n", neg_num);
    return (0);
}
