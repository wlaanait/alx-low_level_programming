#include "main.h"

/**
 * _isupper - checks for uppercase character
 * Return: 1 on success 0 on failure
 * @c: function parameter
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
