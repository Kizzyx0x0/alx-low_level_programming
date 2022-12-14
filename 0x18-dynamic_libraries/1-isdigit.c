/**
 * _isdigit - check the character is digit or not
 * @c: input character
 *
 * Return: 1 if c is a digit, return 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
