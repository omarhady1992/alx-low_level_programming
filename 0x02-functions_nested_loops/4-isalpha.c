#include "main.h"

/**
 * _isalpha-Function that checks if the input is alphabet
 * @c: input character to be checked
 * Return: 1 if c is alphabet and 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'));
}
