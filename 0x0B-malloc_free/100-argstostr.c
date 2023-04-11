#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments
 * @ac: counts
 * @av: arguments
 * Return: success
 */
char *argstostr(int ac, char **av)
{
	int i, m, n = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (m = 0; av[i][m]; m++)
		{
			k++;
		}
	}
	k += ac;
	s = malloc(sizeof(char) * k + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (m = 0; av[i][m]; m++)
		{
			s[n] = av[i][m];
			n++;
		}
		if (s[n] == '\0')
		{
			s[n++] = '\n';
		}
	}
	return (s);
}
