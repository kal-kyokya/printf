#include "main.h"

/**
 * _printf - Send to stdout a formatted string passed in it.
 * @fmat: String specifying expected data types.
 *
 * Return: 0 if programs runs succesfully.
 */
int _printf(const char *fmat, ...)
{
	txf tf[] =
	{
		{"c", print_char},
		{"s", print_str}
	};
	va_list ptr_to_arg;
	int i, count;

	va_start(ptr_to_arg, fmat);
	i = 0;
	while (fmat != NULL && fmat[i] != '\0')
	{
		if (fmat[i] == 37 && fmat[i + 1] == 37)
		{
			_putchar('%');
			i = i + 2;
		}
		else if (fmat[i] == 37)
		{
			count = 0;
			while (count < 2)
			{
				if (tf[count].s[count] == fmat[i + 1])
				{
					tf[count].func(ptr_to_arg);
					break;
				}
				count++;
			}
		}
		i++;
	}

	va_end(ptr_to_arg);
	return (0);
}
