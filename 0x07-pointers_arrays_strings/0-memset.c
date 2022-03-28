#include "main.h"

/**
 * _memset - fills memory with bytes
 * @s: pointer
 * @b: character variable
 * @n: unsigned int
 * Return: the pointer to dest
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
