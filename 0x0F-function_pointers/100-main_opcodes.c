#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: success
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	char *address;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	address = (char *)main;
	for (index = 0; index < bytes; index++)
	{
		if (index == bytes - 1)
		{
			printf("%02hhx\n", address[index]);
			break;
		}
		printf("%02hhx", address[index]);
	}
	return (0);
}

