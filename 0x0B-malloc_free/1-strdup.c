#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: character
 * Return: 0 (Success)
 */

char *_strdup(char *str)
{
	char *dup;
	int l, r = 0;

	if (str == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
		l++;

	dup = malloc(sizeof(char) * (l + 1));
	if (dup == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		dup[r] = str[r];

	return (dup);
}
