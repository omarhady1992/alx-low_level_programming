#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main-a function that prints alphabet letter by letter
 * escept for e and q
 * Return: 0 if executed
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar('\n');
	return (0);
}
