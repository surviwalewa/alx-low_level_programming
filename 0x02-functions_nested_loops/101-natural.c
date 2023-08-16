#include <stdio.h>

/**
 * main - program that computes and prints the sum of all the multiples
 *
 * Return: (0)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
