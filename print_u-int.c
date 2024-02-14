#include "main.h"

/**
 * print_uint - Sends an unsigned decimal number to stdout using _putchar().
 * @ptr_to_arg: Integer to be printed.
 *
 * Return: length of integer.
 */
int print_uint(va_list ptr_to_arg)
{
	int divisor, rest, quotient;
	unsigned int input;

	input = va_arg(ptr_to_arg, unsigned int);
	divisor = 10;
	if (input == 0)
		_putchar(0 + '0');
	else
	{
		while (input / divisor > 9)
			divisor *= 10;
		while (input / divisor < 10 && divisor != 1)
		{
			quotient = input / divisor;
			_putchar(quotient + '0');
			rest = input % divisor;
			if (rest == 0 && divisor != 1)
			{
				while (divisor != 1)
				{
					_putchar(rest + '0');
					divisor /= 10;
				}
			}
			if (rest < 10)
			{
				_putchar(rest + '0');
				divisor = 1;
			}
			else
			{
				input = rest;
				divisor /= 10;
			}
		}
	}
	return (0);
}
