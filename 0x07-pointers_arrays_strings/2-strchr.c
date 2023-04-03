#include "main.h"
/**
 * _strchr - locates a string
 * @s: pointer
 * @c: character
 * Return:
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	i++;
	}
return (0);
}
