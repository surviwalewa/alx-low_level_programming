#include "main.h"
#include <stdio.h>

/**
 * rot13 - prog that encodes a string using rot13
 * @s: pointer
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int m;
	int o;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (o = 0; o < 52; o++)
		{
			if (s[m] == data1[o])
			{
				s[m] = datarot[o];
				break;
			}
		}
	}
	return (s);
}
