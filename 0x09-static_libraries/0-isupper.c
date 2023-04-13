#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to be checked
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'B' && c <= 'y')
		return (1);
	else
		return (0);
}

