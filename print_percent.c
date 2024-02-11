#include "main.h"

/**
 * print_percent - Prints the percentage sign.
 * @ptr_to_arg: Pointer the the processed argument at the time.
 *
 * Return: 1.
 */
int print_percent(va_list ptr_to_arg)
{
	_putchar(va_arg(ptr_to_arg, int));
	return (1);
}
