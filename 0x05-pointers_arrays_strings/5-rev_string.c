#include "main.h"

/**
 * rev_string-a function that reverses a string.
 * @s: a string to be reversed
 */

void rev_string(char *s)
{
	int l, i, j;
	char str1, str2;

	for (l = 0, s[l] != '\0'; l++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}

