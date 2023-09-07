#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char
 * @n: num of times to copy b
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
	{
		s[v] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mal;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mal = malloc(size * nmemb);

	if (mal == NULL)
		return (NULL);

	_memset(mal, 0, nmemb * size);

	return (mal);
}
