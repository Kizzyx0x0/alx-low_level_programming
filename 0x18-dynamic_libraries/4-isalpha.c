#include "holberton.h"

/**
 * _isalpha - check whether a character is alphabet or not.
 * @c: character to be checked.
 * Return: 1 if the character is an alphabet.
 * Return 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
