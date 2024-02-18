#include "main.h"

/**
 * print_int - Send an integer number to stdout using _putchar().
 * @ptr_to_arg: Integer to be printed.
 *
 * Return: Length of integer.
 */
int print_int(va_list ptr_to_arg)
{
	int divisor, count;
	long int input;
	char *ptr;

	divisor = 10;
	input = va_arg(ptr_to_arg, long int);
	if (input < 0)
		input *= -1;
	ptr = _itoa(input, divisor);
	count = 0;
	while (ptr[count] != '\0')
	{
		_putchar(ptr[count]);
		count++;
	}

	return (count);
}
