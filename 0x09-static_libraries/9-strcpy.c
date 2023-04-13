#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int i = 0;

	while (*(src + a) != '\0')
	{
		l++;
	}
	for ( ; i < a ; i++)
	{
		dest[i] = src[i];
	}
	dest[a] = '\0';
	return (dest);
}

