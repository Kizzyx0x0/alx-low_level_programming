#include "holberton.h"
/**
 * _abs - absolute value of the number from zero.
 * @n: the number to be converted.
 * Return: absolute value of the input number.
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
