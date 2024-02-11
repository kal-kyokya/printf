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
	int count, len;

	count = 0;
	s = va_arg(ptr_to_arg, char*);
	if (s == NULL)
	{
		s = "(NULL)";
		len = _strlen(s);
		while (count < len)
		{
			_putchar(s[count]);
			count++;
		}
	}
	else
	{
		len = _strlen(s);
		while (s[count] != '\0')
		{
			_putchar(s[count]);
			count++;
		}
	}
	return (len);
}
