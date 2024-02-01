#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list ptr_to_arg);
void print_str(va_list ptr_to_arg);


/**
 * txf - Typedef for struct typeXfunc
 */
typedef struct typeXfunc txf;

typedef struct typeXfunc
{
	char *s;
	void (*func)();
} txf;

/**
 * print_char - Send a single character to stdout.
 * @ptr_to_arg: Pointer to nth variadic arguments.
 *
 * Return: Nothing.
 */
void print_char(va_list ptr_to_arg)
{
	_putchar(va_arg(ptr_to_arg, char));
}

/**
 * print_str - Send a string to stdout.
 * @ptr_to_arg: Pointer to nth variadic arguments.
 *
 * Return: Nothing.
 */
void print_str(va_list ptr_to_arg)
{
	char *s;
	int count;

	s = va_arg(ptr_to_arg, char*);
	count = 0;
	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}
}

#endif
