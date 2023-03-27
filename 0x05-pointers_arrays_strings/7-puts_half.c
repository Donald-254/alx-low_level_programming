#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: string
 *
 */
void puts_half(char *str)
{
	int i, j, len2, len1, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		len1 = (len + 1) / 2;
		for (i = len1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		len2 = len / 2;
		for (j = len2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
