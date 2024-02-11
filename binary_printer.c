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
