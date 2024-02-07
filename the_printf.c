#include "main.h"

/**
 * _printf - Send to stdout a formatted string passed in it.
 * @fmat: String specifying expected data types.
 *
 * Return: 0 if programs runs succesfully.
 */
int _printf(const char *fmat, ...)
{
	txf tf[] = {
		{"%c", print_char},
		{"%s", print_str}
	};
	va_list ptr_to_arg;
	int i;

	va_start(ptr_to_arg, fmat);
	i = 0;
	while (fmat != NULL && fmat[i] != '\0')
	{
		if (fmat[i] == '%' && tf[0].s == fmat[i + 1])
		{
			tf[0].func(ptr_to_arg);
			i = i + 2;
		}
		else if (fmat[i] == '%' && tf[1].s == fmat[i + 1])
		{
			tf[1].func(ptr_to_arg);
			i = i + 2;
		}
		else
		{
			_putchar(fmat[i]);
			i++;
		}
	}

	va_end(ptr_to_arg);
	return (0);
}
