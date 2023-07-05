#include "main.h"

/**
 * factorial-A function that returns the factorial of an input integer
 * @n: input integer
 * Return: factorial of the integer
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

