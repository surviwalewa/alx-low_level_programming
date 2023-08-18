#include <stdio.h>
/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int d, e, f, e1, e2, f1, f2;

	e = 1;
	f = 2;

	printf("%lu", e);

	for (d = 1; d < 91; d++)
	{
		printf(", %lu", f);
		f = f + e;
		e = f - e;
	}
	e1 = e / 1000000000;
	e2 = e % 1000000000;
	f1 = f / 1000000000;
	f2 = f % 1000000000;

	for (1 = 92; d < 99; d++)
	{
		printf(", %lu", f1 + (f2 / 1000000000));
		printf("%lu", f2 % 1000000000);
		f1 = f1 + e1;
		e1 = f1 - e1;
		f2 = f2 + e2;
		e2 = f2 - e2;
	}

	printf("\n");

	return (0);
}

