#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments
 * @ac: integer
 * @av: array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, s = 0, p = 0;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			p++;
	}
	p += ac;

	arg = malloc(sizeof(char) * p + 1);
	if (arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		arg[s] = av[i][n];
		s++;
	}
	if (arg[s] == '\0')
	{
		arg[s++] = '\n';
	}
	}
	return (arg);
}
