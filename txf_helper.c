#include "main.h"

/**
 * txf_helper - Facilitates linking of format specifier to function.
 * @fmat: Pointer to formatted string.
 * @ptr_to_arg: Pointer to the argument being processed.
 *
 * Return: Length of printed string.
 */
int txf_helper(const char *fmat, va_list ptr_to_arg)
{
	int i, count, len;

	i = len = 0;
	while (fmat[i] != '\0')
	{
		if (fmat[i] == '%')
		{
			count = txf_helper1(fmat, ptr_to_arg, &i);
			if (count == -1)
				return (-1);
			len += count;
			i++;
			continue;
		}
		_putchar(fmat[i]);
		len++;
		i++;
	}

	return (len);
}

/**
 * txf_helper1 - Facilitates linking of format specifier to function.
 * @fmat: Pointer to formatted string.
 * @ptr_to_arg: Pointer to the argument being processed.
 * @x: Pointer index to current fmat element.
 *
 * Return: Length of printed string.
 */
int txf_helper1(const char *fmat, va_list ptr_to_arg, int *x)
{
	txf tf[] = {
		{'c', print_char}, {'s', print_str},
		{'b', print_nary}, {'R', print_rot13},
		{'i', print_int}, {'d', print_int},
		{'p', print_pointer}, {'x', print_hexa},
		{'X', print_Hexa}, {'r', print_rev_str},
		{'u', print_uint}, {'o', print_octa}
	};
	int count, tfs, size;

	size = 0;
	*x = *x + 1;
	if (fmat[*x] == '\0')
		return (-1);
	if (fmat[*x] == '%')
	{
		_putchar('%');
		return (1);
	}
	count = 0;
	tfs = sizeof(tf) / sizeof(tf[0]);
	while (count < tfs)
	{
		if (tf[count].s == fmat[*x])
		{
			size = tf[count].func(ptr_to_arg);
			return (size);
		}
		count++;
	}

	_putchar('%');
	_putchar(fmat[*x]);

	return (2);
}
