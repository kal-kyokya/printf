#include "main.h"

/**
 * print_int - Send an integer number to stdout using _putchar().
 * @ptr_to_arg: Integer to be printed.
 *
 * Return: Length of integer.
 */
int print_int(va_list ptr_to_arg)
{
	int count;
	char *ptr;

	ptr = _itoa(va_arg(ptr_to_arg, int), 10);

	count = just_print((ptr != NULL) ? ptr : "NULL");

	return (count);
}
