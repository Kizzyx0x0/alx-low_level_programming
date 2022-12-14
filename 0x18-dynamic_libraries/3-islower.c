#include "holberton.h"

/**
 * _islower - tell a character is a lowercase
 * @c: character to be input.
 * Return: 1 if it is a lowercase, 0 is not a lowercase.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
