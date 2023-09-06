#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[v] - s2[v]
 */
int _strcmp(char *s1, char *s2)
{
	int v;


	v = 0;
	while (s1[v] != '\0' && s2[v] != '\0')
	{
		if (s1[v] != s2[v])
		{
			return (s1[v] - s2[v]);
		}
	v++;
	}
	return (0);
}
