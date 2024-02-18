#include "main.h"

/**
 * print_Hexa - Send an hexadecimal upper case to stdout using _putchar().
 * @ptr_to_arg: Integer to be printed.
 *
 * Return: Length of integer.
 */
int print_Hexa(va_list ptr_to_arg)
{
	int count;
	char *ptr;

	ptr = _itoa(va_arg(ptr_to_arg, unsigned int), 16);

	count = 0;
	while (ptr[count] != '\0')
	{
		if (ptr[count] <= 'z' && ptr[count] >= 'a')
			ptr[count] = ptr[count] - 32;
		count++;
	}
	count = just_print((ptr != NULL) ? ptr : "NULL");

	return (count);
}
