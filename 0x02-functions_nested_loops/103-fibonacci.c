#include <stdio.h>
/**
 * main - main entry
 *
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 *
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int j = 2;
	int k;
	int total = 0;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}
