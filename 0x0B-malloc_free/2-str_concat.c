#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate strings
 * @s1: first string
 * @s2: second string
 * Return: success
 */
char *str_concat(char *s1, char *s2)
{
	char *concati;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	concati = malloc(sizeof(char) * (i + j + 1));
	if (concati == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		concati[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concati[i] = s2[j];
		i++;
		j++;
	}
	concati[i] = '\0';
	return (concati);
}
