#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @c: value of the number
 *
 * Return: -c or c
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);

	else
		return (c * -1);
}
