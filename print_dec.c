#include "main.h"

/**
 * print_dec - Send an decimal number to stdout using _putchar().
 * @ptr_to_arg: Integer to be printed.
 *
 * Return: Length of integer.
 */
int print_dec(va_list ptr_to_arg)
{
	int divisor, rest, quotient;
	int input, count;

	input = va_arg(ptr_to_arg, int);
	divisor = 10;
	count = 1;
	if (input == 0)
	{
		_putchar(0 + '0');
		return (1);
	}
	else
	{
		if (input < 0)
		{
			_putchar('-');
			input *= -1;
		}
		if (input / divisor == 0)
		{
			_putchar(input + '0');
			return (1);
		}
		while (input / divisor > 9)
		{
			divisor *= 10;
			count++;
		}
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
	return (count);
}
