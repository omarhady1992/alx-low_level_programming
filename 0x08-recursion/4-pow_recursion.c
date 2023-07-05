#include "main.h"

/**
 * _pow_recursion-computes an integer to the power of another integer
 * @x: integer
 * @y: power
 * Return: x to the power of y
 */

int _power_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _power_recursion(x, y - 1));
}
