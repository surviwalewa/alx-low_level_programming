#include "main.h"

/**
 * _memset - function that fills a block of memory
 * @s: starting address
 * @b: value
 * @n: num of bytes
 * Return: array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int z = 0;

	for (; n > 0; z++)
	{
		s[z] = b;
		n--;
	}
	return (s);
}
