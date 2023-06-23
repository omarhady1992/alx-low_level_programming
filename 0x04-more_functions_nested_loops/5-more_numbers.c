#include "main.h"

/**
 * more_numbers-a function that prints the numbers, from 0 to 14,
 * follows by a new line
 */

void more_numbers(void)
{
	int a = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		while (a <= 14)

		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			a++;
		}
	}
	_putchar('\n');
}
