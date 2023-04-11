#include "main.h"
#include <stdlib.h>
/**
 * count_char - count characters in a string
 * @s: pointer
 * Return: success
 */
int count_char(char *s)
{
	int check = 0, x, y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
		{
			check = 0;
		}
		else if (check == 0)
		{
			check = 1;
			y++;
		}
	}
	return (y);
}
/**
 * strtow - split a string into words
 * @str: pointer to string
 * Return: success
 */
char **strtow(char *str)
{
	char **matx, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
	{
		len++;
	}
	words = count_char(str);
	if (words == 0)
	{
		return (NULL);
	}
	matx = (char **) malloc(sizeof(char *) * (words + 1));
	if (matx == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				{
					return (NULL);
				}
				while (start < end)
				{
					*tmp++ = str[start++];
				}
				*tmp = '\0';
				matx[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}
	matx[k] = NULL;
	return (matx);
}
