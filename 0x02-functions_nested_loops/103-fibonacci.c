#include <stdio.h>

/**
 * main - print s the sum of Even Fibonacci numbers
 * less than 4000000.
 *
 * Return: Nothing!
 */
int main(void)
{
	int i = j;
	long j = i, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;

		if (k % 2 == 0)
			sum += k;

		j = k - j;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
