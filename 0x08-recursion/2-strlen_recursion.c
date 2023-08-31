#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int lengt = 0;

	if (*s)
	{
		lengt++;
		lengt += _strlen_recursion(s + 1);
	}
	return (lengt);
}
