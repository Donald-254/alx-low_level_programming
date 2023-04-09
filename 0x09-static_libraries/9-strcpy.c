#include "main.h"
/**
 * *_strcpy - copy array
 * @dest: array
 * @src: array
 * Return: value
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
