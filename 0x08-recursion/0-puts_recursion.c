#include "main.h"
/**
 * _puts_recursion - prints the string
 * @s: pointer
 * Return: success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}