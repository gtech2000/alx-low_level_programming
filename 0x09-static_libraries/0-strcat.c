#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int a;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest [j] = src[a];
		j++;
		a++;
	}

	dest[j] = '\0';
	return (dest);
}

