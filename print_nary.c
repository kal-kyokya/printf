#include "main.h"

/**
 * binary_printer - Converts and simultaneously prints a int to binary.
 * @x: Integer to be converted and printed.
 *
 * Return: The length of the binary number.
 */
int binary_printer(int x)
{
	int remainder, length;

	remainder = x % 2;
	length = 0;
	if (x < 2)
	{
		_putchar(x);
		len++;
		return (len);
	}
	else
	{
		binary_printer(x / 2);
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
	int x;

	x = va_arg(ptr_to_arg, int);
	binary_printer(x);
	return (x);
}
