#include "main.h"

int plus_non_custom_specifier(va_list args)
{
    int k = va_arg(args, int);
    int printed_chars = 0;

    if(k >= 0)
    {
        _putchar('+');
        printed_chars += print_number(k);
        printed_chars += 1;  
    }

    else
    {

         
        printed_chars += print_number(k);
        printed_chars += 1;  
    }
   return(printed_chars);   
}


int space_non_custom_specifier(va_list args)
{
    int k = va_arg(args, int);
    int printed_chars = 0;

    if(k >= 0)
    {
        _putchar(' ');
        printed_chars += print_number(k);
        printed_chars += 1;  
    }

    else
    {

         
        printed_chars += print_number(k);
        printed_chars += 1;  
    }
   return(printed_chars);   
}

int hash_x_non_custom_specifier(va_list args)
{
    int print_chars = 0;
   
    _puts("0x"); 
    print_chars += x_specifier(args);
    return (print_chars);
}

int hash_X_non_custom_specifier(va_list args)
{
    int print_chars = 0;
  
    _puts("0x");  
    print_chars += X_specifier(args);
    return (print_chars);
}
