#include "main.h"
/**
 * _isalpha - prints if a character is uppercase or not
 * @c: prints character c
 * Return: 1 is uppercase or lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
