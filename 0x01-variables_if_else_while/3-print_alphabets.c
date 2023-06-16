#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-prints alphabet in lowercase
 * then follows with alphabet in uppercase
 * Return: 0 if executed
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
