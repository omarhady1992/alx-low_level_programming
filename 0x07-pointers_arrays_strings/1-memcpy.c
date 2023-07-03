#include "main.h"

/**
 * _memcpy-a function that copies memory area.
 * @dest: destination address
 * @src: source adress
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
