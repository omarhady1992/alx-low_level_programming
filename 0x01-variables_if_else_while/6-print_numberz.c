#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-prints single digits of base 10 numbers
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 48;  num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
