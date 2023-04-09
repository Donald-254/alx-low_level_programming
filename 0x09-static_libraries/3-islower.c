#include "main.h"
/**
 * _islower - prints if a character is lowercase or not
 * @c: prints character c
 * Return: 1 is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
