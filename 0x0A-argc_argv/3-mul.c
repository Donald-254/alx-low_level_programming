#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: success
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] == NULL || argc > 3 || argc < 3)
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
			{
				mul *= atoi(argv[i]);
			}
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
