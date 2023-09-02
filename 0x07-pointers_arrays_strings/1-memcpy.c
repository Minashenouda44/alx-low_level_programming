/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: Number of bytes
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
