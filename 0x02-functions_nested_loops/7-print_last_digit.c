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
	rem = n % 10;
	if (rem < 0)
		rem = -rem;

	_putchar(rem + 48);

	return (rem);
}
