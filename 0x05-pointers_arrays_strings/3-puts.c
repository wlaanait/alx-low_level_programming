#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
		putchar(str[i]);
	putchar('\n');
}
