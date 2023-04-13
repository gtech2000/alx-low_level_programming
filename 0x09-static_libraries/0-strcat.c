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

	i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	j = 0;
	while (src[a] != '\0')
	{
		des [j] = src[j];
		j++;
		a++;
	}

	dest[j] = '\0';
	return (dest);
}

