#include "holberton.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: a pointer point to the string
 * @accept: a pointer point to accept string
 *
 * Return: return a number for characters in accept also appear in string of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
