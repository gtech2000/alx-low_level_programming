#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an arrays of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and numbers of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int z, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (z = 0; min <= max; z++)
		ptr[z] = min++;

	return (ptr);
}
