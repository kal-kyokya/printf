#include "main.h"

/**
 * print_pointer - Prints the address of its input variable.
 * @ptr_to_arg: The pointer to the argument being processed.
 *
 * Return: The length of the string.
 */
int print_pointer(va_list ptr_to_arg)
{
	int count;
	int s;

	count = 0;
	s = va_arg(ptr_to_arg, int);
	s += count;
	return (s);
}
