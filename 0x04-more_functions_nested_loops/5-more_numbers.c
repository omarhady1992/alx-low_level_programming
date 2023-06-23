#include "main.h"

/**
 * more_numbers-a function that prints the numbers, from 0 to 14,
 * follows by a new line
 */

void more_numbers(void)
{
	int a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)

		{
			if (a >= 10)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
	}
	_putchar('\n');
}
