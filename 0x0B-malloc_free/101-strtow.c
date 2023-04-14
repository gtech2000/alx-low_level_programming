#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to counts the number of words in a string
 * @s: string to evaluate
 * Return: number of word
 */
int count_word(char *s)
{
	int flag, b, z;

	flag = 0;
	z = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			z++;
		}
	}
	return (z);
}
/**
 * **strtow - split a string into words
 * @str: string to be split
 * Return: pointer to array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;

	int i, z = 0, len = 0, words, b = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (b)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (b + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[z] = tmp - b;
				z++;
				b = 0;
			}
		}
		else if (b++ == 0)
			start = i;
	}
	matrix[z] = NULL;
	return (matrix);
}
