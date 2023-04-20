#include "variadic_functions.h"
/**
 * print_strings - prints string
 * @separator: separates string
 * @n: arguments passed
 * Return: success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char *);

		if (s == NULL)
			printf("(nil)");
		printf("%s", s);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
