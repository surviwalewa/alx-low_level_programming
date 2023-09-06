#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dim. array of integers
 * @width: input
 * @height: input
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **aaa;
	int x, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	aaa = malloc(sizeof(int *) * height);

	if (aaa == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		aaa[x] = malloc(sizeof(int) * width);
		if (aaa[x] == NULL)
		{
			for (; x >= 0; x--)
				free(aaa[x]);
			free(aaa);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (i = 0; i < width; i++)
			aaa[x][i] = 0;
	}
	return (aaa);
}
