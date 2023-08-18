#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0 ; i < 15 ; i++)
	{
		if (i > 9)
			putchar(i / 10 + '0');
		putchar(i % 10 + '0');
	}
	putchar('\n');

}
