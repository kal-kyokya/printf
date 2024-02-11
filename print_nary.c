#include "main.h"

/**
 * print_nary - Prints an integer as a binary.
 * @ptr_to_arg: Pointer to the currently processed argument.
 *
 * Return: Length of the binary number.
 */
int print_nary(va_list ptr_to_arg)
{
	int x;

	x = va_arg(ptr_to_arg, int);
	binary_printer(x);
	return (x);
}
