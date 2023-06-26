#include "main.h"

/**
 * puts_half-a function that prints half of a string, followed by a new line.
 * @str: string
 */

void puts_half(char *str)
{
	int len, i, l;

	for (l = 0, str[l] != '\0'; l++)
	{
	}
	len = ((l - 1) / 2);
	for (i = len + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
