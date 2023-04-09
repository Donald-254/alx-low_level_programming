#include "main.h"
/**
 * _abs - Checks absolute value of an integer
 * Return: 0 success
 * @s: integer
 */
int _abs(int s)
{
	if (s < 0)
	{
		s = -s;
	}
	return (s);
}
