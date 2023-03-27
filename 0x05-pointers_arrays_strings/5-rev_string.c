#include "main.h"
/**
 * rev_string - reverse string
 * @s: string
 *
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char swap;

	while (s[len] != '\0')
	{
		len++;
	}
	len -= 1;
	while (len > i)
	{
		swap = s[i];
		s[i] = s[len];
		s[len] = swap;
		len--;
		i++;
	}
}

