#include "main.h"

/**
 * _isupper - function for upper case characters
 *
 * @c: variable text
 * Return: (0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
