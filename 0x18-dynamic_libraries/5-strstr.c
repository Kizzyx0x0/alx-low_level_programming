#include "holberton.h"
#include <stdlib.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: a pointer point to a string
 * @needle: a pointer point to substring
 *
 * Return: return a pointer to the begin in substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int len_n, len_h;

	len_n = len_h = 0;
	while (needle[len_n] != '\0')
		len_n++;
	while (haystack[len_h] != '\0')
		len_h++;
	haystack = 0;
	return (haystack);
}
