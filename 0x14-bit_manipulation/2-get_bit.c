#include "main.h"

/**
 * get_bit - returns d value of a bit at an idx in a dec num
 * @n: number
 * @index: idx of d bit
 *
 * Return: val of d bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
