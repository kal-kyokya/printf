#include "main.h"

/**
 * print_rot13 - Send an encrypted version of string to stdout.
 * @ptr_to_arg: Pointer to argument of variadic function.
 *
 * Return: The length of the rot13'd string.
 */
int print_rot13(va_list ptr_to_arg)
{
	char *s;
	int size;

	s = va_arg(ptr_to_arg, char *);
	size = rot13((s != NULL) ? s : "AHYY");

	return (size);
}
