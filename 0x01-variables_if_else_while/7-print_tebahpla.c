#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints lower letters in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');

	return (0);
}
