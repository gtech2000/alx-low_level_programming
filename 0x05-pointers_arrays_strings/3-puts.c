#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to print
 * Return: void 
 */
void _puts(char *str)

{
i	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
