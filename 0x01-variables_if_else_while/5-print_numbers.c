#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-prints single digits of base 10 numbers
 * Return: 0
 */

int main(void)
{
	unsigned int num;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
