/**
 * _strchr - a function that locates a character in string.
 * @s: a pointer point to string
 * @c: a constant character search for.
 *
 * Return: the pointer that the string (in success) or NULL for not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
