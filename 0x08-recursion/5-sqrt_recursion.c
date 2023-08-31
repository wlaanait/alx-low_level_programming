#include "main.h"

int calculate_sqrt(int n, int start, int end);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 * Return: 'n', or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (calculate_sqrt(n, 1, n));
}

/**
 * calculate_sqrt - function to perform the actual recursive calculation.
 * @n: The number to calculate the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 * Return: 'n', or -1
 */

int calculate_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);
	if (start >= end)
		return (-1);
	if (mid * mid < n)
		return (calculate_sqrt(n, mid + 1, end));
	return (calculate_sqrt(n, start, mid - 1));
}
