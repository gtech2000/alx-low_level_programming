#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name using pointer to functions
 * @name: string to add
 * @f: pointer to functions
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
