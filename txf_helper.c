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
		len = len + 1;
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
		{'c', print_char}, {'s', print_str}, {'R', print_rot13}, {'X', print_Hexa},
		{'b', print_nary}, {'i', print_int}, {'d', print_int}, {'r', print_rev_str},
		{'p', print_pointer}, {'x', print_hexa}, {'o', print_octa}, {'S', print_S},
		{'u', print_uint}
	};
	int count, tfs, size, y, len_ptr = _strlen(ptr);
	char *ptr = "difoxX";

	count = size = 0;
	y = *x = *x + 1;
	if (fmat[*x] == '\0')
		return (-1);
	if (fmat[*x] == '%')
	{
		_putchar('%');
		return (1);
	}
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
	while (len_ptr >= 0)
	{
		len_ptr--;
		if (fmat[*x - 1] == '%' && fmat[*x + 1] == ptr[len_ptr])
		{
			size = txf_helper2(fmat, ptr_to_arg, &y, ptr[len_ptr]);
			return (size);
		}
	}
	_putchar('%');
	_putchar(fmat[*x]);
	return (2);
}

/**
 * txf_helper2 - Facilitates linking of non conv. fmat spec. to function.
 * @fmat: Pointer to formatted string.
 * @ptr_to_arg: Pointer to the argument being processed.
 * @x: Pointer index to current fmat element.
 * @c: Character representing data type.
 *
 * Return: Length of printed string.
 */
int txf_helper2(const char *fmat, va_list ptr_to_arg, int *x, char c)
{
	txf tf[] = {
		{'+', print_plus}, {' ', print_space}
	};
	int count, tfs, size;

	size = *x;
	tfs = sizeof(tf) / sizeof(tf[0]);
	count = 0;
	while (count < tfs)
	{
		if (tf[count].s == fmat[*x])
		{
			size = tf[count].func(ptr_to_arg);
			return (-1);
		}
		count++;
	}

	return (size);
}
