#include "main.h"

/**
 * print_uint - Send an integer number to stdout using _putchar().
 * @ptr_to_arg: Integer to be printed.
 *
 * Return: Length of integer.
 */
int print_uint(va_list ptr_to_arg)
{
	int count, input;
	char *ptr;

	input = va_arg(ptr_to_arg, int);
	ptr = _itoa(input, 10);

	count = just_print((input < 0) ? "NULL" : ptr);

	return (count);
}
