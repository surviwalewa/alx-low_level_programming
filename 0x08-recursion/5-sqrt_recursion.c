#include "main.h"

int actual_sqrt_recursion(int n, int j);
/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses that find the natural square root
 * @n: number
 * @j: iterator
 * Return: result
 */
int actual_sqrt_recursion(int n, int j)
{
	if (j * j < n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}
