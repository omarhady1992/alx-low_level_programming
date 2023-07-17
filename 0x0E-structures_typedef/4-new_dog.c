#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * len_str-length of string
 * @str: The string to be measured
 * Return: The length of string
 */

int len_str(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (len);
}

/**
 * cp_str-copies a string from a destination to a destination
 * @dest: buffer for new string destination
 * @src: original string destination
 * Return: pointer to the dest
 */

char *cp_str(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = len_str(name);
	len2 = len_str(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	cp_str(dog->name, name);
	cp_str(dog->owner, owner);
	dog->age = age;

	return (dog);
}
