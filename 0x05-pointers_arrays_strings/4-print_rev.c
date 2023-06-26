#include "main.h"

/**
 * print_rev-prints and input string in reverse
 * @s: input string
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
