#include <stdio.h>

/**
 * main - sums multiples of 3 or 5
 *
 * Description: sums multiples of 3 0r 5 between 0 and 1024
 *
 * Return: Always(0) Success
 */

int main(void)
{
	int begin;
	int end;
	int total;

	end = 1024;
	total = 0;

	for (begin = 0; begin < end; begin++)
	{
		if ((begin % 3 == 0) || (begin % 5 == 0))
		{
			total = total + begin;
		}
		else
		{
			continue;
		}
	}

	printf("%d", total);
	printf("\n");

	return (0);
}
