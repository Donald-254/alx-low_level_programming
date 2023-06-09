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

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, int);

		printf("%d", arg);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
