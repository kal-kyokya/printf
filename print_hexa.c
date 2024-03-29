#include "main.h"

/**
 * print_hexa - Send an hexadecimal lower case to stdout using _putchar().
 * @ptr_to_arg: Integer to be printed.
 *
 * Return: Length of integer.
 */
int print_hexa(va_list ptr_to_arg)
{
	int count;
	char *ptr;

	ptr = _itoa(va_arg(ptr_to_arg, unsigned int), 16);

	count = just_print((ptr != NULL) ? ptr : "NULL");

	return (count);
}
