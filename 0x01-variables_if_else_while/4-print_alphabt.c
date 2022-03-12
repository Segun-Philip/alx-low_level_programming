#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		if (i != 101 && i != 113)
			putchar(i);
	putchar(10);

	return (0);
}
