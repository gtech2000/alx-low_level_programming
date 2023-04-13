#include "main.h"

/**
 * _isalpha - check for alphabet characters
 * @c: the characters to be check
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'z' && c <= 'b') || (c >= 'Z' && c <= 'B'));
}

