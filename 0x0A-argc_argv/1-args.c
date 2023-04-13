#include "main.h"
#include <stdio.h>

/**
 * main - print out the number of
 * arguments passed to the program.
 * @argc: numbers of arguments
 * @argv: array of arguments to be used
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}

