#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int l, m, n, lengt, o, digit;

	l = 0;
	m = 0;
	n = 0;
	lengt = 0;
	o = 0;
	digit = 0;

	while (s[lengt] != '\0')
		lengt++;

	while (l < lengt && o == 0)
	{
		if (s[l] == '-')
			++m;

		if (s[l] >= '0' && s[l] <= '9')
		{
			digit = s[l] - '0';
			if (m % 2)
				digit = -digit;
			n = n * 10 + digit;
			o = 1;
			if (s[l + 1] < '0' || s[l + 1] > '9')
				break;
			o = 0;
		}
			l++;
	}

	if (o == 0)
		return (0);

	return (n);
}
