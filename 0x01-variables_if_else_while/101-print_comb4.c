#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-prints all possible combs for three digits
 * Return: 0
 */

int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = 48;  num <= 55; num++)
	{
		for (num2 = 49; num2 <= 56; num2++)
		{
			for (num3 = 50; num3 <= 57; num3++)
			{
				if (num2 > num && num3 > num2)
				{
					putchar(num);
					putchar(num2);
					putchar(num3);
					if (num != 55 || num2 != 56)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
