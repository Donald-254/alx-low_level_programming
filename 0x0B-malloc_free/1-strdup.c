#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str: string
 * Return: success
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int s = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc(sizeof (char) * (i + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (s = 0; str[s]; s++)
	{
		p[s] = str[s];
	}
	return (p);
}
