#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, print = 0;

	while (b)
	{
		switch (n & 1L << b--)
		{
			case true:
				_putchar('1');
				print++;
			case false:
				_putchar('0');
		}
	}
	if (!print)
		_putchar('0');
}
