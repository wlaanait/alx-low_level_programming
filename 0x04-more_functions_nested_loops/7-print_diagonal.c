#include "main.h"

/**
 * print_diagonal - draws a diagonal using the '\' character
 * @n: number of times the '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i, j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
}
