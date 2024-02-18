#include "main.h"

/**
 * just_print - Send s string to stdout.
 * @s: String to be printed.
 *
 * Return: The length of the string.
 */
int just_print(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}

	return (count);
}
