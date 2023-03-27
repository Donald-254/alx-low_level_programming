#include "main.h"
/**
 * print_rev - string in reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	while (len >= 0)
	{
		_putchar(*s);
		len--;
		s--;
	}
	_putchar('\n');
}
