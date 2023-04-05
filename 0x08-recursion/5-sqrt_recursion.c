#include "main.h"
int actual_sqrt(int n, int i);
/**
 * _sqrt_recursion - square root
 * @n: variable
 * Return: success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt(n, 0));
}
/**
 * actual_sqrt - calculates square root
 * @n: variable
 * @i: variable
 * Return: success
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt(n, i + 1));
}
