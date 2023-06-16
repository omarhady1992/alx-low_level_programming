#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main-prints alphabet letter by letter in reverse
 * Return: 0 if executed
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');
	return (0);
}
