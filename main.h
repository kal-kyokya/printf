#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ptr_to_arg);
int print_str(va_list ptr_to_arg);
int print_nary(va_list ptr_to_arg);
int _strlen(char *s);
int _strlenc(const char *s);
int print_dec(va_list ptr_to_arg);
int print_int(va_list ptr_to_arg);
int print_pointer(va_list ptr_to_arg);
int buffer(char s);
int txf_helper(const char *fmat, va_list ptr_to_arg);
int txf_helper1(const char *fmat, va_list ptr_to_arg, int *x);
char *_itoa(long int num, int base);
int just_print(char *s);
int print_hexa(va_list ptr_to_arg);
int print_Hexa(va_list ptr_to_arg);
int rev_string(char *s);
int print_rev_str(va_list ptr_to_arg);
int rot13(char *s);
int print_rot13(va_list ptr_to_arg);
int print_octa(va_list ptr_to_arg);
int print_uint(va_list ptr_to_arg);

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
	char s;
	int (*func)(va_list);
} txf;

#endif
