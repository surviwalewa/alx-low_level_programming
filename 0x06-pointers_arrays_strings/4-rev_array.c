#include "main.h"
/**
 * reverse_array - prog that reverse array of integers
 * @a: array
 * @n: num of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int f;
	int h;

	for (f = 0; f < n--; f++)
	{
		h = a[f];
		a[f] = a[n];
		a[n] = h;
	}
}
