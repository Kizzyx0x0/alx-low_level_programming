#include "holberton.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: a pointer point to dest string
 * @src: a pointer point to src string
 * @n: the number of letters that append to dest string from src string
 *
 * Return: return a pointer point to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
