#include "main.h"

/**
 * print_uint - Send an integer number to stdout using _putchar().
 * @ptr_to_arg: Integer to be printed.
 *
 * Return: Length of integer.
 */
int print_uint(va_list ptr_to_arg)
{
	int count;
	char *ptr;

	ptr = _itoa(va_arg(ptr_to_arg, unsigned int), 10);

	count = just_print((ptr == NULL) ? "NULL" : ptr);

	return (count);
}
