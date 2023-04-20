#include "variadic_functions.h"

/**
 * print_numbers - print arguments passed
 * @separator: to separate the numbers
 * @n: argument passed
 * Return: success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	if (separator == NULL)
		return;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, unsigned int);

		printf("%d", arg);
		if (i != n - 1)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(args);
}
