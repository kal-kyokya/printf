#include "main.h"

/**
 * _printf - Send to stdout a formatted string passed in it.
 * @fmat: String specifying expected data types.
 *
 * Return: Number of characters printed on screen.
 */
int _printf(const char *fmat, ...)
{
	va_list ptr_to_arg;
	int i, size, len;

	if (fmat == NULL)
		return (-1);
	len = _strlenc(fmat);
	if (len <= 0)
		return (0);
	va_start(ptr_to_arg, fmat);
	size = txf_helper(fmat, ptr_to_arg);
	_putchar(-1);
	va_end(ptr_to_arg);
	return (size);
}
