#include "main.h"

/**
 * prime_iterator-iterates through numbers
 * @n: input number
 * @i: iterator
 * Return: 1 if prime
 */


int prime_iterator(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_iterator(n, i - 1));
}


/**
 * is_prime_number-checks if the number is prime
 * @n: input number
 * Return: 1 if the number is prime
 */



int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_iterator(n, n - 1));
}
