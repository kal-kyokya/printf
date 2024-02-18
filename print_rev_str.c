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
	int size, len;

	len = 0;
	s = va_arg(ptr_to_arg, char *);
	size = strlenc(s);
	while (size >= 0)
	{
		size--;
		_putchar(s[size]);
		len++;
	}

	return (len);
}
