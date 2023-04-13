#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - join two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of string
 * Return: success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, k, p;
	char *str;

	if (s1 == NULL)
	{
		m = 0;
	}
	else
	{
		for (m = 0; s1[m]; ++m)
			;
	}
	if (s2 == NULL)
	{
		k = 0;
	}
	else
	{
		for (k = 0; s2[k]; ++k)
			;
	}
	if (k > n)
	{
		k = n;
	}
	str = malloc(sizeof(char) * (m + k + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < m; p++)
	{
		str[p] = s1[p];
	}
	for (p = 0; p < k; p++)
	{
		str[p + m] = s2[p];
	}
	str[p + k] = '\0';
	return (str);
}


