#include <stdio.h>
#include <math.h>

/**
 * add - a function adds two integers
 * @a: integers
 * @b: integers
 *
 * Return: return the sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - a function subtracts two integers
 * @a: integers
 * @b: integers
 *
 * Return: return the different
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - a function multiplys two integers
 * @a: integers
 * @b: integers
 *
 * Return: return the product
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - a function divides two integers
 * @a: integers
 * @b: integers
 *
 * Return: return the fraction
 */
int div(int a, int b)
{
	if (b)
		return (a / b);
	return (0);
}

/**
 * mod - a function modulos two integers
 * @a: integers
 * @b: integers
 *
 * Return: return the remainder
 */
int mod(int a, int b)
{
	int res, c;

	c = a;
	a = a >= 0 ? a : a * -1;
	b = b >= 0 ? b : b * -1;
	if (b)
	{
		res = a % b;
		res = c > 0 ? res : res * -1;
		return (res);
	}
	return (b);
}
