#include <stdio.h>

/**
 * main-computes the sums of multiples of 3 and 5 under 1024
 * Return: 0 if executed
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
