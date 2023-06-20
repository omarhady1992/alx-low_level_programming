#include "main.h"

/**
 * _abs-prints absolute value of input
 * @n: integer
 * Return: absolute value of input
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
		return ((-1) * n);
}
