#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range of val stored and num of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *mal;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	mal = malloc(sizeof(int) * size);

	if (mal == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		mal[i] = min++;

	return (mal);
}
