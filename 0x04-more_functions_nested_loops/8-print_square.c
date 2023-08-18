#include "main.h"
/**
 * print_square - funtion for printing square
 * @size: is the size of the square
 *
 */
void print_square(int size)
{
	int b, c;

	c = 0;
	if (size < 1)
		_putchar('\n');

	while (c < size)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		c++;
	}
}
