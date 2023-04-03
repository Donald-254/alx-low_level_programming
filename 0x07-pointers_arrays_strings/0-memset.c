#include "main.h"
/**
 * _memset - allocate fixed memory
 * @s: pointer
 * @b: character
 * @n: memory allocated
 * Return:
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
