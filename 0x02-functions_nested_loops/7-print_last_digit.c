#include "main.h"

/**
 * print_last_digit-prints the last digit of input number
 * @n: input number
 * Return: always 0
 */

int print_last_digit(int n)
{
	int rem;

	if (n > 0)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;

	_putchar(a + 48);

	return (a);
}
