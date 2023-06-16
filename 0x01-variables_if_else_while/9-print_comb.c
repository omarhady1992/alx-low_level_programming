#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-prints all possible combs for single digits
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 48;  num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
