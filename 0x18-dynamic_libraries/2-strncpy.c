#include "holberton.h"

/**
 * _strncpy - a function that copies a string
 * @dest: a pointer point to dest string
 * @src: a pointer point to src string
 * @n: the numbers to be copied.
 *
 * Return: return a pointer point to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
