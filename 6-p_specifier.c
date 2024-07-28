
#include "main.h"
int p_specifier(va_list args)
{

    long *ptr = va_arg(args, long);

    return (print_big_number((unsigned   long)ptr));
}

int print_big_number(unsigned  long n)
{
    int printed_chars = 0;

    if (n / 10)
        printed_chars += print_number(n / 10);
    _putchar(n % 10 + '0');
    printed_chars++;
    return (printed_chars);
}