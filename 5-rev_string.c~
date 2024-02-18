#include "main.h"

/**
 * rev_string - Inverts a string.
 * @s: String to be inverted.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int len, count, count2;
	char s2;

	len = count = 0;
	while (s[len] != '\0')
		len++;
	count2 = len;
	while (count < (count2 / 2))
	{
		len--;
		s2 = s[count];
		s[count] = s[len];
		s[len] = s2;
		count++;
	}
}
