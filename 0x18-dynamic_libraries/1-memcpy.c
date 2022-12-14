/**
 * _memcpy - a function that copies memory area.
 * @dest: a pointer point to destination string
 * @src: a pointer point to source string.
 * @n: the size the be copied.
 *
 * Return: return a pointer point to dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
