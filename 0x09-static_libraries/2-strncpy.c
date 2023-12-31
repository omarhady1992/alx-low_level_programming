#include "main.h"

/**
 * _strncpy- copies a string
 * @n: number of characters to be copied
 * @dest: dest string
 * @src: source string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
