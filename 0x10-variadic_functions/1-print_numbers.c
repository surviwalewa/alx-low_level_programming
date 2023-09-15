#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - func that prints numbers, followed by a new line.
 * @separator: The str to be printed btw nums.
 * @n: The num of integers passed to the func
 * @...: A variable num of nums to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int index;

	va_start(numbs, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbs, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbs);
}
