#include "main.h"
/**
 * _strchr - Entry point
 * @s: input value
 * @c: input value
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int p = 0;

	for (; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
			return (&s[p]);
	}
	return (0);
}
