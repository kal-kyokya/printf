#include "main.h"

/**
 * _printf - Send to stdout a formatted string passed in it.
 * @fmat: String specifying expected data types.
 *
 * Return: Number of characters printed on screen.
 */
int _printf(const char *fmat, ...)
{
	txf tf[] = {
		{"c", print_char},
		{"s", print_str},
		{"b", print_nary},
		{"%", print_percent}
	};
	va_list ptr_to_arg;
	int i, count, len;

	va_start(ptr_to_arg, fmat);
	i = len = 0;
	while (fmat != NULL && fmat[i] != '\0')
	{
		if (fmat[i] == 37)
		{
			count = 0;
			while (count < 4)
			{
				if (tf[count].s[count] == fmat[i + 1])
				{
					len += tf[count].func(ptr_to_arg);
					i++;
					break;
				}
				count++;
			}
		}
		i++;
	}

	va_end(ptr_to_arg);
	return (len);
}
