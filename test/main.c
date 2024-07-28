
#include "../main.h"
#include <stdio.h>
int main(void)
{



	char *str1, *str2;
 

	str1 = "Newton";
	str2 = "Abel";


	_printf("_print character %c and %c\n", 'a', '%');
	printf("print character %c and %c\n", 'a', '%');
	printf("\n");

	_printf("_print string %s and %s\n", str1, str2);
	printf("print string %s and %s\n", str1, str2);
	printf("\n");

	_printf("_print  %% \n");
	printf("print  %% \n" );
	printf("\n");
return (0);
}
