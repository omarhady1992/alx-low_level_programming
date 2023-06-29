#include "main.h"
#include <stdio.h>

/**
 * reverse_array-reverses array
 * @n: number of elements in the array
 * @a: input array
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int v;

	for (i = 0; i < n / 2; i++)
	{
		v[i] = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = v[i];
	}
}

