#include "main.h"

/**
 * rot13 - Encrypts a string using the ROT13 substitution cipher.
 * @s: String to be encrypted.
 *
 * Return: The length of the new string version.
 */
int rot13(char *s)
{
	int count1, count2;
	char *set1, *set2;

	set1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	set2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	count1 = 0;
	while (s[count1] != '\0')
	{
		count2 = 0;
		while (set1[count2] != '\0')
		{
			if (set1[count2] == s[count1])
			{
				_putchar(set2[count2]);
				break;
			}
			count2++;
		}
		if (!set1)
			_putchar(s[count1]);

		count1++;
	}

	return (count1);
}
