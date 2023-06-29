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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}

