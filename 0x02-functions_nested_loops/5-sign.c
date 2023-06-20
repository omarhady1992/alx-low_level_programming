#include "main.h"

/**
 * print_sign-Function that checks the input and prints its sign
 * @n: input integer
 * Return: -1 for -ve integers, 1 for +ve integers and 0 for zeroes
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
