#include "main.h"

/**
 * binary_printer - Converts and simultaneously prints a int to binary.
 * @x: Integer to be converted and printed.
 *
 * Return: The length of the binary number.
 */
int binary_printer(unsigned int x)
{
	unsigned int remainder, len;

	remainder = x % 2;
	if (x < 2)
	{
		len = 0;
		_putchar(x);
		len++;
		return (len);
	}
	else
	{
		len = binary_printer(x / 2);
	}
	_putchar(remainder);
	len++;
	return (len);
}

/**
 * print_nary - Prints an integer as a binary.
 * @ptr_to_arg: Pointer to the currently processed argument.
 *
 * Return: Length of the binary number.
 */
int print_nary(va_list ptr_to_arg)
{
	unsigned int x, y;

	if (va_arg(ptr_to_arg, int) < 0)
		return (0);
	x = va_arg(ptr_to_arg, int);
	y = binary_printer(x);
	return (y);
}
