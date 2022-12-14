#include "holberton.h"

/**
 * _strpbrk - a function that searches any set of a string
 * @s: a pointer point to the string
 *@accept: pointer to another searching string
 *
 *Return: return a pointer that point to the string after searching
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
