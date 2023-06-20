#include "main.h"

/**
 * print_alphabet-Function that prints alphabet
 * Return: 0 if executed
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
