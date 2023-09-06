#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: str to evaluate
 *
 * Return: num of words
 */
int count_word(char *s)
{
	int flag, g, e;

	flag = 0;
	e = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			e++;
		}
	}

	return (e);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, m = 0, lengt = 0, words, n = 0, start, end;

	while (*(str + lengt))
		lengt++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= lengt; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (n)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (n + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[m] = tmp - n;
				m++;
				n = 0;
			}
		}
		else if (n++ == 0)
			start = i;
	}

	matrix[m] = NULL;

	return (matrix);
}
