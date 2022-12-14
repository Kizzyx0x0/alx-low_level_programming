/**
 * _isupper - a function that checks for uppercase character
 * @c: the character to be checked
 *
 * Return: 1 on success,
 * return 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
