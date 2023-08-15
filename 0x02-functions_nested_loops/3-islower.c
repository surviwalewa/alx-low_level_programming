#include "main.h"
/**
 * _islower - check lowercase character
 *
 * @c: parameter to be checked
 *
 * Return: (1) if c is lower otherwise (0)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
