#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list ptr_to_arg);
void print_str(va_list ptr_to_arg);

/**
 * struct typeXfunc - Matches specifier and function.
 * @s: Format specifier string
 * @func: Required function.
 *
 * Description: This data structure will facilitate calling of
 * the function f(x) depending on what data it will be handling
 * thanks to the format specifier stored in string s.
 */
typedef struct typeXfunc
{
	char *s;
	void (*func)();
} txf;

#endif
