#include "main.h"

/**
 * fizz_buzz - Prints the numbers from 1 to 100, followed by a new line
 * For multiples of three print Fizz instead of the number
 * For the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 */

void fizz_buzz(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 5) == 0 && (i % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

