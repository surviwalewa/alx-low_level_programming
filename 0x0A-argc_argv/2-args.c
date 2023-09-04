#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: num of arguments
 * @argv: arr of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}
	return (0);
}
