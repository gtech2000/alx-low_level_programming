#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - function that prints a string
 * followed by a new line.
 * @s:string
 * Return: 0n success 1
 */
void _puts_recursion(char *s)
{
	if (s == 0)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
