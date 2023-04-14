#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicate it  to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
	char *bbb;
	int i, s = 0;

	if (str == NULL)

		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	bbb = malloc(sizeof(char) * (i + 1));
	if (bbb == NULL)
		return (NULL);
	for (s = 0; str[s]; s++)
		bbb[s] = str[s];
	return (bbb);
}

