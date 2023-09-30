#include "main.h"

/**
 * flip_bits - prog that counts d num of bits to change
 * @n: first num
 * @m: second num
 *
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		current = exclusive >> b;
		if (current & 1)
			count++;
	}

	return (count);
}
