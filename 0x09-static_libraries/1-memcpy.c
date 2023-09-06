#include "main.h"

/**
 *_memcpy - a function that copies memory
 *@dest: storage memory
 *@src: mem
 *@n: num of bytes
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int l = n;

	for (; p < l; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
