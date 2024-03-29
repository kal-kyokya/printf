#include "main.h"

/**
 * _itoa - Converts an integer to ascii.
 * @num: The number to be converted.
 * @base: An integer value defining the base for conversion.
 *
 * Return: A pointer to the buffer containing the conversion.
 */
char *_itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char *ptr;
	char sign = 0;
	unsigned long x;

	ptr = &buffer[49];
	*ptr = '\0';
	x = num;
	if (num < 0)
	{
		x = num * (-1);
		sign = '-';
	}
	do	{
		*--ptr = array[x % base];
		x /= base;
	} while (x != 0);

	if (sign)
		*--ptr = sign;

	return (ptr);
}
