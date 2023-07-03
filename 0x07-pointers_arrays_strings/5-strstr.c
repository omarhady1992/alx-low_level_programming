#include "main.h"
#include <stdio.h>

/**
 * _strstr-a function that locates a substring.
 * @haystack:searchable string
 * @needle: target string
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j])
			{
				j++;
				return (haystack + i);
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}
