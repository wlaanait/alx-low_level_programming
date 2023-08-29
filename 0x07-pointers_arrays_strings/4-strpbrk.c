#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: The string to search in
 * @accept: The set of bytes to search for
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
		{
			return (s);
		}
		a++;
	}
	s++;
	}
	return (NULL);
}
