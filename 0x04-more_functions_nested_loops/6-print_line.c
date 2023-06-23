#include "main.h"

/**
 * print_numbers-a function that prints a straight line,
 * follows by a new line
 * @n: number of _ or line length
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a=1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
