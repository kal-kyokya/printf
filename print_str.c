#include "main.h"

/**
 * print_str - Send a string to stdout.
 * @ptr_to_arg: Pointer to nth variadic arguments.
 *
 * Return: Nothing.
 */
void print_str(va_list ptr_to_arg)
{
	char *s;
	int count;

	s = va_arg(ptr_to_arg, char*);
	count = 0;
	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}
}
