#include "main.h"

/**
 * print_char - Send a single character to stdout.
 * @ptr_to_arg: Pointer to nth variadic arguments.
 *
 * Return: 1.
 */
int print_char(va_list ptr_to_arg)
{
	_putchar(va_arg(ptr_to_arg, int));
	return (1);
}
