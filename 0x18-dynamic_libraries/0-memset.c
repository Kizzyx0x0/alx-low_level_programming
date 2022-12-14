#include "holberton.h"

/**
 * _memset - a function that fills memory with constant byte.
 * @s: a pointer point to memory buffer.
 * @b: constat char to fill with in buffer.
 * @n: the bytes to be filled.
 *
 * Return: return the pointer point to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		s[i] = b;
	}
	return (s);
}
