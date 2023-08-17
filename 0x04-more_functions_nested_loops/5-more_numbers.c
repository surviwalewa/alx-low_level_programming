#include "main.h"
/**
 * more_numbers - prints 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int b, c;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
