#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments passed
 * @n: argument passed
 * Return: success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, unsigned int);

		total += arg;
	}
	va_end(args);
	return (total);
}
