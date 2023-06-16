#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-prints base 16 numbers
 * Return: 0
 */

int main(void)
{
	int num;
	char alpha;

	for (num = 48;  num <= 57; num++)
		putchar(num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');
	return (0);
}
