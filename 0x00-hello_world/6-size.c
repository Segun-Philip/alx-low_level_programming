#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d bytes(s)\n", (int)sizeof(a));
	printf("Size of an int: %d bytes(s)\n", (int)sizeof(b));
	printf("Size of a long int: %d bytes(s)\n", (int)sizeof(c));
	printf("Size of a long long int: %d bytes(s)\n", (int)sizeof(d));
	printf("Size of a float: %d bytes(s)\n", (int)sizeof(f));
	return (0);
}
