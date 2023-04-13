#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocate memory
 * @ptr: pointer to prevoius memory
 * @old_size: old memory
 * @new_size: new memory
 * Return: success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *old_p = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		n = old_size;
	}
	for (i = 0; i < n; i++)
	{
		p[i] = old_p[i];
	}
	free(ptr);
	return (p);
}
