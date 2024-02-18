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

	s = va_arg(ptr_to_arg, const char *);
	size = _strlenc(s);
	len = size - 1;
	while (len >= 0)
	{
		_putchar(s[size]);
		len--;
	}

	return (size);
}
