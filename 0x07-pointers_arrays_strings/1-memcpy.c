#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: pointer
 * @src: pointer
 * @n: memory
 * Return: returns pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (0);
}
