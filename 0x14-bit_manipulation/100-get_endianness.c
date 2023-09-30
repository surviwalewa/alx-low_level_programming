#include "main.h"

/**
 * get_endianness - checks if a machine is lit or big endianness
 * Return: 0 big, 1 lit
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
