#include "main.h"
/**
 * print_square - squares
 * @size: the size of the square
 *
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j==i)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
	}
}
