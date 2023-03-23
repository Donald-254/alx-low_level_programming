#include "main.h"
/**
 * print_number - print integers
 * @n: variable
 *
 */
void print_number(int n)
{
	if (n >= 0)
	{
		if (n >= 10 && n <= 99)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
		else if (n >= 100 && n <= 999)
		{
			_putchar((n / 100) + '0');
			_putchar(((n % 100) / 10) + '0');
			_putchar(((n % 100) % 10) + '0');
			_putchar('\n');
		}
		else if (n >= 1000 && n <= 9999)
		{
			_putchar((n / 1000) + '0');
			_putchar(((n % 1000) / 100) + '0');
			_putchar((((n % 1000) % 100) / 10) + '0');
			_putchar((((n % 1000) % 100) % 10) + '0');
			_putchar('\n');
		}
		else
		{
			_putchar(n + '0');
			_putchar('\n');
		}
	}
	else if (n < 0)
	{
		n = -n;
		if (n >= 10 && n <= 99)
		{
		       _putchar('-');
		       _putchar((n / 10) + '0');
		       _putchar((n % 10) + '0');
		       _putchar('\n');
		}
		else if (n >= 100 && n <= 999)
		{
			_putchar('-');
			_putchar((n / 100) + '0');
			_putchar(((n % 100) / 10) + '0');
			_putchar(((n % 100) % 10) + '0');
			_putchar('\n');
		}
		else if (n >= 1000 && n <= 9999)
		{
			_putchar('-');
			_putchar((n / 1000) + '0');
			_putchar(((n % 1000) / 100) + '0');
			_putchar((((n % 1000) % 100) / 10) + '0');
			_putchar((((n % 1000) % 100) % 10) + '0');
			_putchar('\n');
		}
	}
}
