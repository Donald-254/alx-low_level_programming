#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 success
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s%s ", "Fizz", "Buzz");
		}

		else if ((i % 5 == 0) && (i != 100) && (i % 3 != 0))
		{
			printf("%s ", "Buzz");
		}
		else if (i == 100)
		{
			printf("%s\n", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
