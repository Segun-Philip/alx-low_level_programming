#include "main.h"
/**
 * _memcpy - function that copies bytes from memory area to another memory
 * @dest: destination
 * @src: source
 * @n: given number
 * Return: the pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
