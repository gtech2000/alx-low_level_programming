#include "main.h"
/**
 *_memcpy - a function that copy memory area
 *@dest: the memory where is stores
 *@src: memory where to copy
 *@n: number of bytes
 *
 *Return: copy memory with n bytes change
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
