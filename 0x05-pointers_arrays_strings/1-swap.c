#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first parameter
 * @b: second parameter
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
