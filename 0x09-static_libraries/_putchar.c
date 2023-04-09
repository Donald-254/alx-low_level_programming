#include <unistd.h>
#include "main.h"
/**
 * _putchar - A program that prints a single character
 * @t: character to be printed
 * Return: 1 fot success
 * return -1 for error
 */
int _putchar(char t)
{
	return (write(1, &t, 1));
}
