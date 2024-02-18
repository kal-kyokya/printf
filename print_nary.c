#include "main.h"

/**
 * print_nary - Send a binary number to stdout using _putchar().
 * @ptr_to_arg: Integer to be printed.
 *
 * Return: Length of integer.
 */
int print_nary(va_list ptr_to_arg)
{
	int count;
	char *ptr;

	ptr = _itoa(va_arg(ptr_to_arg, int), 2);

	count = just_print((ptr != NULL) ? ptr : "NULL");

	return (count);
}
