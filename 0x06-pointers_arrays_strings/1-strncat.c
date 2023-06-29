#include "main.h"

/**
 * _strncat- concatenates n characters of a string to another string
 * @n: number of chars to be taken
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while (j < n && *src)
	{
		dest[i + j] = *src;
		src++;
		j++
	}
	dest[i + j] = '\0';
	return (dest);
}
