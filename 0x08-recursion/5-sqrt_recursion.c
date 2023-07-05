#include "main.h"

/**
 * _sqrt_recursion-computes square root of input integer
 * @n: input integer
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (pow_iterator(n, 0));
}

/**
 * pow_iterator- function that iterates throug possible sqrts of n
 * @n:  input integer
 * @i : iteating possibilities
 * Return: sqrt of n
 */

int pow_iterator(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (pow_iterator(n, i + 1));
}
