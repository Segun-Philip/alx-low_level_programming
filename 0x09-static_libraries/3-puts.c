#include "main.h"

/**
 * _puts - prints a string followef by new line
 * @str: string to stdout
 * Return: void
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}