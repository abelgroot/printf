#include "main.h"

/**
* di_case_handler - handle d & i specifier switch case.
* @length_modifier: the length modifier input.
* @args: va_list arguments from the printf func.
*
* Return: number of printed characters.
*/
int di_case_handler(char length_modifier, va_list args)
{
	int printed_chars = 0;

	if (length_modifier == 'l')
		printed_chars += ld_specifier(args);
	else if (length_modifier == 'h')
		printed_chars += hd_specifier(args);
	else
		printed_chars += d_specifier(args);

	return (printed_chars);
}

/**
* u_case_handler - handle u specifier switch case.
* @length_modifier: the length modifier input.
* @args: va_list arguments from the printf func.
*
* Return: number of printed characters.
*/
int u_case_handler(char length_modifier, va_list args)
{
	int printed_chars = 0;

	if (length_modifier == 'l')
		printed_chars += lu_specifier(args);
	else if (length_modifier == 'h')
		printed_chars += hu_specifier(args);
	else
		printed_chars += u_specifier(args);

	return  (printed_chars);
}

/**
* o_case_handler - handle o specifier switch case.
* @length_modifier: the length modifer input.
* @args: va_list arguments from the printf func.
*
* Return: number of printed characters.
*/
int o_case_handler(char length_modifier, va_list args)
{
	int printed_chars = 0;

	if (length_modifier == 'l')
		printed_chars += lo_specifier(args);
	else if (length_modifier == 'h')
		printed_chars += ho_specifier(args);
	else
		printed_chars += o_specifier(args);

	return (printed_chars);
}
/**
* x_case_handler - handle x specifier switch case
* @length_modifier: the length modifier input.
* @args: va_list arguments from the printf func.
*
* Return: number of printed characters.
*/
int x_case_handler(char length_modifier, va_list args)
{
	int printed_chars = 0;

	if (length_modifier == 'l')
		printed_chars += lx_specifier(args);
	else if (length_modifier == 'h')
		printed_chars += hx_specifier(args);
	else
		printed_chars += x_specifier(args);

	return (printed_chars);
}

/**
* X_case_handler - handle X specifier switch case.
* @length_modifier: the length modifier input.
* @args: va_list arguments from the printf func.
*
* Return: number of printed characters.
*/
int X_case_handler(char length_modifier, va_list args)
{
	int printed_chars = 0;

	if (length_modifier == 'l')
		printed_chars += lX_specifier(args);
	else if (length_modifier == 'h')
		printed_chars += hX_specifier(args);
	else
		printed_chars += X_specifier(args);

	return (printed_chars);
}
