#include "main.h"

/**
 * print_char - Send a single character to stdout.
 * @ptr_to_arg: Pointer to nth variadic arguments.
 *
 * Return: The length of a char which is 1.
 */
int print_char(va_list ptr_to_arg)
{
	int c;

	c = va_arg(ptr_to_arg, int);
	_putchar(c + '0');
	return (1);
}
