#include "main.h"

/**
* process_specifier - Processes a specifier with optional length modifier.
* @specifier: The specifier character.
* @args: The argument list.
* @length_modifier: The length modifier character.
*
* Return: The number of characters printed.
*/
int process_specifier(char specifier, va_list args, char length_modifier)
{
	int printed_chars = 0;

	if (specifier == 'u' || specifier == 'o'
	|| specifier == 'x' || specifier == 'X')
		printed_chars += uoxX_switch_handler(length_modifier, specifier, args);
	else if (specifier == 'd' || specifier == 'i')
		printed_chars += di_switch_handler(length_modifier, args);
	else if (specifier == 'c' || specifier == 's' || specifier == '%')
		printed_chars += csm_switch_handler(specifier, args);
	else
	{
		switch (specifier)
		{
			case 'b':
				printed_chars += b_specifier(args);
				break;
			case 'p':
				printed_chars += p_specifier(args);
				break;
			case 'S':
				printed_chars += S_specifier(args);
				break;
			case 'r':
				printed_chars += r_specifier(args);
				break;
			case 'R':
				printed_chars += R_specifier(args);
				break;
			default:
				_putchar('%');
				_putchar(specifier);
				printed_chars += 2;
				break;
		}
	}
	return (printed_chars);
}

/**
* uoxX_switch_handler - handler for the u, o, x, X, specifier
* @length_modifier: length specifier argument
* @specifier: input specifier
* @args: input argument.
*
* Return: return number of character printed.
*/
int uoxX_switch_handler(char length_modifier, char specifier, va_list args)
{
	int printed_chars = 0;

	switch (specifier)
	{
		case 'u':
			printed_chars += u_case_handler(length_modifier, args);
			break;
		case 'o':
			printed_chars += o_case_handler(length_modifier, args);
			break;
		case 'x':
			printed_chars += x_case_handler(length_modifier, args);
			break;
		case 'X':
			printed_chars += X_case_handler(length_modifier, args);
			break;
	}
	return (printed_chars);
}

/**
* di_switch_handler - d and i specifier handler
* @length_modifier: length modifier input.
* @args: va_list input
*
* Return: number of character printed.
*/
int di_switch_handler(char length_modifier, va_list args)
{
	int printed_chars = 0;

	printed_chars += di_case_handler(length_modifier, args);
	return (printed_chars);
}

/**
* csm_switch_handler - c, s and % specifier handler
* @length_modifier: length modifier input.
* @args: va_list input.
* @specifier: input specifier.
*
* Return: number of character printed.
*/
int csm_switch_handler(char specifier, va_list args)
{
	int printed_chars = 0;

	switch (specifier)
	{
		case 's':
			printed_chars += s_specifier(args);
			break;
		case 'c':
			printed_chars += c_specifier(args);
			break;
		case '%':
			printed_chars += _putchar('%');
			break;
	}
	return (printed_chars);
}
