#include "variadic_functions.h"

/**
 * print_numbers-print the input numbers
 * @separator: separator between numbers
 * @n: number of numbers
 * @...: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	v_start(ap, n);
	while (i--)
	{
		if (i)
		{
			printf("%d%s", va_arg(ap, int),
					separator ? separator : "");
		}
		else
			printf("%d\n", va_arg(ap, int);
	}
	va_end(ap);
}
