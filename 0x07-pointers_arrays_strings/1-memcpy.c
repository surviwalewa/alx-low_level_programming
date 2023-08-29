#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory storage
 * @src: memory
 * *@n: num of bytes
 *
 * Return: n byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int h = 0;
	int i = n;

	for (; h < i; h++)
	{
		dest[h] = src[h];
		n--;
	}
	return (dest);
}
