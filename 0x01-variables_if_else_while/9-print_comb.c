#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: assigns random number to variable n
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}