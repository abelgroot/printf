#include <stdio.h>
#include "main.h"

int main(void)
{
	int len = _printf("padding %10d\n", 10);
	int len2 = printf("padding %10d\n", 10);
	_printf("my length %10d\n", len);
	printf("my length %10d\n", len2);
	return (0);
}
