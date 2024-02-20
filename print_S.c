#include "main.h"

/**
 * print_S - Handles the S format specifier.
 * @ptr_to_arg: Pointer to the input argument.
 *
 * Return: Length of final string.
 */
int print_S(va_list ptr_to_arg)
{
	char *s1, *s2;
	int count, count1, size, temp;

	size = count = temp = 0;
	s1 = va_arg(ptr_to_arg, char *);

	while (s1[count] != '\0')
	{
		if (s1[count] < 32 || s1[count] > 126)
		{
			size += just_print("\\x");
			temp = s1[count];
			if (temp < 16)
				size += just_print("0");
			s2 = _itoa(temp, 16);
			count1 = 0;
			while (s2[count1] != '\0')
			{
				if (s2[count1] <= 'z' && s2[count1] >= 'a')
					s2[count1] = s2[count1] - 32;
				count1++;
			}
			size += just_print((s2 != NULL) ? s2 : "NULL");
		}
		count++;
	}

	return (size);
}
