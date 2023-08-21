#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: integer
 * Return: length
 */
int _strlen(char *s)
{
	int lengt = 0;

	while (*s != '\0')
	{
		lengt++;
		s++;
	}

	return (lengt);
}
