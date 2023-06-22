#include "main.h"

/**
 * print_numbers-a function that prints the numbers, from 0 to 9,
 * follows by a new line
 * Return: 0  always
 */

void print_numbers(void)
{
	int a = 48;
	while (a >= 48 && a <= 57)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
