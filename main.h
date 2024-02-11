#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ptr_to_arg);
int print_str(va_list ptr_to_arg);
int print_nary(va_list ptr_to_arg);
int binary_printer(int x);

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