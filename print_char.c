#include "main.h"

/**
 * print_char - Send a single character to stdout.
 * @ptr_to_arg: Pointer to nth variadic arguments.
 *
 * Return: Nothing.
 */
void print_char(va_list ptr_to_arg)
{
        _putchar(va_arg(ptr_to_arg, int));
}
