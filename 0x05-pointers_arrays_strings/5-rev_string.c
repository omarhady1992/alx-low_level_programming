#include "main.h"

/**
 * rev_string-a function that reverses a string.
 * @s: a string to be reversed
 */

void rev_string(char *s)
{
	int l, i, j;
	char str1, str2;

	for (l = 0; s[l] != '\0'; l++)
	{
	}

	j = l - 1;
	i = 0;

	while (j > i)
	{
		str1 = s[i];
		str2 = s[j];
		s[i] = str2;
		s[j] = str1;
		j--;
		i++;
	}
}

