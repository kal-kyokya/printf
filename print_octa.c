#include "main.h"

/**
 * octal_printer - Converts and simultaneously prints an int to an octal.
 * @x: Integer to be converted and printed.
 *
 * Return: The length of the octal number.
 */
int octal_printer(unsigned int x)
{
	unsigned int remainder, len;

	remainder = x % 8;
	if (x < 8)
	{
		len = 2;
		_putchar(x);
		len++;
		return (len);
	}
	else
	{
		len = 1 + octal_printer(x / 8);
	}
	_putchar(remainder);
	return (len);
}

/**
 * print_octa - Prints an integer as a octal.
 * @ptr_to_arg: Pointer to the currently processed argument.
 *
 * Return: Length of the octal number.
 */
int print_octa(va_list ptr_to_arg)
{
	unsigned int x, y;

	if (va_arg(ptr_to_arg, int) < 0)
		return (0);
	x = va_arg(ptr_to_arg, int);
	_putchar(0 + '0');
	_putchar('o');
	y = octal_printer(x);
	return (y);
}
