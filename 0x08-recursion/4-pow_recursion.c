#include "main.h"
/**
 * _pow_recursion - finding power of an integer
 * @x: variable
 * @y: variable
 * Return: success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
