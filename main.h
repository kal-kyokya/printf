#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list ptr_to_arg);
void print_str(va_list ptr_to_arg);


#endif
