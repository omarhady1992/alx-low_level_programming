#include "main.h"

/**
 * *_strcpy-a function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest:the buffer pointed to by dest
 * @src: string pointed to by src
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l, i;

	for (l = 0; src[l] != '\0'; l++)
	{
	}
	for (i = 0; i <= l; i++)
		dest[i] = src[i];
	return (dest);
}
