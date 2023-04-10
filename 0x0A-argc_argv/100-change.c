#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of argument
 * @argv: arguments
 * Return: auccess
 */
int main(int argc, char *argv[])
{
	int cents, i, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			result++;
			cents -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
