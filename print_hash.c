#include "main.h"

/**
 * print_hash - Send an integer number to stdout with the # specifier involved.
 * @ptr_to_arg: Integer to be printed.
 *
 * Return: Length of integer.
 */
int print_hash(va_list ptr_to_arg)
{
	int count;
	char *ptr;

	ptr = _itoa(va_arg(ptr_to_arg, int), 10);

	if (ptr[0] != '-')
	{
		_putchar('+');
		count = 1;
	}
	count += just_print((ptr != NULL) ? ptr : "NULL");

	return (count);
}
