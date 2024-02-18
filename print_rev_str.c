#include "main.h"

/**
 * print_rev_str - Prints a string in a reverse order.
 * @ptr_to_arg: Pointer to processed arguments.
 *
 * Return: Length of string.
 */
int print_rev_str(va_list ptr_to_arg)
{
	char *s;
	int size;

	s = va_arg(ptr_to_arg, char *);
	size = rev_string(s);
	just_print(s);

	return (size);
}
