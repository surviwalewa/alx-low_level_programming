#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: input value
 * @needle: input value
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *m = needle;

		while (*a == *m && *m != '\0')
		{
			a++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
