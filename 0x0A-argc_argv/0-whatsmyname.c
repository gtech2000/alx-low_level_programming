#include "main.h"
#include <stdio.h>

/**
 * main - print name followed by a new line
 * @argc: the number of argument to be used
 * @argv: array of arguments
 *
 * Return:  ALWAYS 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
