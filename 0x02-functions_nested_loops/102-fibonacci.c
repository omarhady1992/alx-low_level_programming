#include <stdio.h>

/**
 * main-printsthe 50 first fibonacci numbers
 * Return: 0 if executed
 */

int main(void)
{
	long int first = 1;
	long int second = 2;
	long int next;
	int i;

	for (i = 1; i <= 50; ++i)
	{
		if (first != 20365011074)
			printf("%ld, ", first);
		else
			printf("%ld\n", first);
		next = first + second;
		first = second;
		second = next;
	}
	return (0);
}
