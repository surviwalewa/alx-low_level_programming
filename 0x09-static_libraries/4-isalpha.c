#include "main.h"

/**
 * _isalpha - prog that checks for alpha character
 * @c: character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
