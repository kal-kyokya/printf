#include "main.h"

/**
 * _strlen - Determines the length of a string.
 * @s: String to pass in function.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
		length++;

	return (length);
}
