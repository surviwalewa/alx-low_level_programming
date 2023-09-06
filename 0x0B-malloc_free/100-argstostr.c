#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer
 * @av: array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int h, n, j = 0, l = 0;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (h = 0; h < ac; h++)
	{
		for (n = 0; av[h][n]; n++)
			h++;
	}
	l += ac;

	arg = malloc(sizeof(char) * l + 1);
	if (arg == NULL)
		return (NULL);
	for (h = 0; h < ac; h++)
	{
	for (n = 0; av[h][n]; n++)
	{
		arg[j] = av[h][n];
		j++;
	}
	if (arg[j] == '\0')
	{
		arg[j++] = '\n';
	}
	}
	return (arg);
}
