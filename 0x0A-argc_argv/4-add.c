#include <stdio.h>
#include <stdlib.h>
/**
 * non_integer - checks for non integer
 * @a: pointer to a string
 * Return: success
 */
int non_integer(char *a)
{
	while (*a != '\0')
	{
		if (*a < '0' || *a > '9')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (non_integer(argv[i]) == 0)
		{
			puts("Error");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
