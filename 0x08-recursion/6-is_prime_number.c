#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - function that returns 1 if input integer is prime number
 * @n: value
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/***
 * actual_prime - calc a num if it is prime recursively
 * @n: value
 * @j: iterator
 * Return: 1 if n a prime, 0 if not
 */
int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
