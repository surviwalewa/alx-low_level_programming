#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: parameter
 * Return: void
 */
void puts2(char *str)
{
	int z;
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	for (z = 0; z < x; z += 2)
	{
	_putchar(str[z]);
	}
	_putchar('\n');
}
