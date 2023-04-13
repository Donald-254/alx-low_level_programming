#include <stdlib.h>
#include "main.h"
/**
 * _calloc - initializes memory to zero
 * @nmemb: elements in an array
 * @size: size of each element in an array
 * Return: success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (nmemb * size); x++)
	{
		p[x] = 0;
	}
	return (p);
}
