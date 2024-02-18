#include "main.h"

/**
 * print_str - Send a string to stdout.
 * @ptr_to_arg: Pointer to nth variadic arguments.
 *
 * Return: The length of the string.
 */
int print_str(va_list ptr_to_arg)
{
	char *s;
	int len;

	s = va_arg(ptr_to_arg, char *);
	len = just_print((s != NULL) ? s : "NULL");

	return (len);
}
