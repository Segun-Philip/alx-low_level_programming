#include <stdio.h>

/**
 * main - print double digit combos
 *
 * Description: print double digit combos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	
	for (i = 48; i < 58; i++)
	{
		j = i + 1;
		for(j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);

			if (i  < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);

	return (0);
}
