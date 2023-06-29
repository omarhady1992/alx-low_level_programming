#include "main.h"

/**
 * leet-turns a strong into 1337
 * @s: input string
 * Return: string
 */

char *leet(char *s)
{
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";
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
