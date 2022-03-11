#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints alphabet in lower and upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);

	return (0);
}
