#include "main.h"

/**
 * print_sing - prints sing of a number
 *@n: function parameter
 * Return: 1, 0 or -1
 */
int print_sing(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
