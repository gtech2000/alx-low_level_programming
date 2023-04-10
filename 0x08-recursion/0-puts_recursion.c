#include "main.h"

/**
 * _puts_recursion - prints a string
 * followed by a new line.
 * @s:string
 * Return: 0n success 1
 */
void _puts_recursion(char *s)
{
	if (*s = 0, s <= 1)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
