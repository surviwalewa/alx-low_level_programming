#include "main.h"

/**
 * clear_bit - prog that sets d val of a given bit to 0
 * @n: pointer to d num to change
 * @index: index of the bit to clear
 *
 * Return: 1 (success), -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
