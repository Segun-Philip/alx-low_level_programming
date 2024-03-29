#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints last digit of variable n
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (n % 10 < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);

	return (0);
}
