#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: value
 * Return: 0
 */
void print_rev(char *s)
{
	int lengt = 0;
	int o;

	while (*s != '\0')
	{
		lengt++;
		s++;
	}
	s--;
	for (o = lengt; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
