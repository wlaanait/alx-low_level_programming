#include "main.h"

/**
 * *cap_string -  function that capitalizes all words of a string
 * @str: The input string
 * Return: A pointer to the modified string
 */

char *cap_string(char *str)
{
	char *ptr = str;
	bool new_word = true;

	while (*ptr != '\0')
	{
		if (is_separator(*ptr))
		{
			new_word = true;
		}
		else if (new_word && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - ('a' - 'A');
			new_word = false;
		}
		else
		{
			new_word = false;
		}
		ptr++;
	}
	return (str);
}
