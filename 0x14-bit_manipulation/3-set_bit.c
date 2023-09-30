#include "main.h"

/**
 * set_bit - prog that sets a bit at a given idx to 1
 * @n: pointer to d num to change
 * @index: idx of d bit to set to 1
 *
 * Return: 1 (success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
