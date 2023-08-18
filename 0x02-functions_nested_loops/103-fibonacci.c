#include <stdio.h>
/**
 * main - sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	long int i, j = 1, k = 2, sum = 0, tsum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((k % 2 == 0) && (k <= 4000000))
		{
			tsum = tsum + k;
		}
		sum = j + k;
		j = k;
		k = sum;
	}
	printf("%ld\n", tsum);
	return (0);
}
