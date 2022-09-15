#include "main.h"
/**
 * isupper - checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
