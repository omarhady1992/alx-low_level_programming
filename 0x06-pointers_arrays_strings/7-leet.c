#include "main.h"

/**
 * leet-turns a strong into 1337
 * @s: input string
 * Return: string
 */

char *leet(char *s)
{
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;

	while (*s)
	{
		for (i = 0; i < 10; i++)
		{
			if (*s == a[i])
			{
				*s = b[i];
			}
		}
		s++;
	}
	return (s);
}
