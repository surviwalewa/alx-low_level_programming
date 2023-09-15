#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - func that prints anything
 * @format: list of types of arguments passed to the func
 */
void print_all(const char * const format, ...)
{
	int m = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					m++;
					continue;
			}
			sep = ", ";
			m++;
		}
	}

	printf("\n");
	va_end(list);
}
