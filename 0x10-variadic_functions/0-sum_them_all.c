#include "variadic_fuctions.h"

/**
 * sum_them_all-sums all variables inserted
 * @n: no. of args
 * @... : the integers to sum
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}

