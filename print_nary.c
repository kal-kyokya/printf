#include "main.h"

/**
 * print_nary - Send a binary number to stdout using _putchar().
 * @ptr_to_arg: Integer to be printed.
 *
 * Return: Length of integer.
 */
int print_nary(va_list ptr_to_arg)
{
	int divisor, count;
	long int input;
	char *ptr;

	divisor = 2;
	input = va_arg(ptr_to_arg, long int);
	ptr = _itoa(input, divisor);
	count = 0;
	while (ptr[count] != '\0')
	{
		_putchar(ptr[count]);
		count++;
	}

	return (count);
}
