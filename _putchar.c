#include "main.h"

/**
 * _putchar - Send a single character to stdout.
 * @c: Character to be printed.
 *
 * Return: Length of buffer.
 */
int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - Creates an array buffer in static memory to store char values.
 * @s: Character tp be passed in buffer function.
 *
 * Return: Length of buffer array or number of array elements.
 */
int buffer(char s)
{
	static char the_buffer[1024];
	static int count;

	if (s != -1)
		the_buffer[count++] = s;
	else if (s == -1 || count == 1024)
	{
		write(1, the_buffer, count);
		count = 0;
	}

	return (1);
}
