#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: area to fill with bytes
 * @b: consatnt byte
 * @n: nember of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
