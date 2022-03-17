#include "main.h"
/**
 * _isalpha - Check if input character is alphabet.
 *
 * @c: int character
 *
 * Return: (1) if letter, lowercase or uppercase, and (0) if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
