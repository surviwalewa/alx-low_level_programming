#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, d, n, lengt, h, dig;

	i = 0;
	d = 0;
	n = 0;
	lengt = 0;
	h = 0;
	dig = 0;

	while (s[lengt] != '\0')
		lengt++;
	while (i < lengt && h == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (d % 2)
				dig = -dig;
			n = n * 10 + dig;
			h = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			h = 0;
		}
		i++;
	}
	if (h == 0)
		return (0);
	return (n);
}

/**
 * main - mul two numbers
 * @argc: num of arguments
 * @argv: arr of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
