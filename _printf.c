#include "main.h"

/**
 * _printf - Send to stdout a formatted string passed in it.
 * @format: String specifying expected data types.
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	char *str;
	int count1, count2, len;
	va_list ptr_to_arg;
	char c;
	char *input_string;

	count1 = len = 0;
	va_start(ptr_to_arg, format);
	while (format[count1] != '\0')
	{
		if (format[count1] == 37 && format[count + 1] == 'c')
		{
			c = va_arg(ptr_to_arg, char);
			_putchar(c);
			len++;
			count1++;
		}
		else if (format[count1] == 37 && format[count + 1] == 's')
		{
			input_string = var_arg(ptr_to_arg, char*);
			count2 = 0;
			while (input_string[count2] != '\0')
			{
				_putchar(input_string[count2]);
				count2++;
				len++;
			}
			count1++;
		}
		else
		{
			_putchar(format[count1]);
			count1++;
			len++;
		}
	}

	return (len - 1);
}
