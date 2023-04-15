#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int z;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (z = 0; z < 52; z++)
		{
			if (s[i] == data1[z])
			{
				s[i] = datarot[z];
				break;
			}
		}
	}
	return (s);
}
