#include "main.h"

/**
 * *string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: string_toupper
 * Return: A pointer to the modified string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
