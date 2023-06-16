#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;
	int n;

	for (m = 0; m <= 99; m++)
	{
		for (n = 0; n <= 99; n++)
		{
			if (n > m)
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				if (m != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
