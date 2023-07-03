#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- pints sums of the diagonals
 * @a: the array
 * @size: array size
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum_right = 0, sum_left = 0;

	for (i = 0; i < size; i++)
	{
		sum_left += a[size * i + i];
		sum_right += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum_left, sum_right);
}

