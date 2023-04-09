#include "main.h"
/**
 * _strlen - length of a string
 * @s: string
 * Return: returns integer
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
