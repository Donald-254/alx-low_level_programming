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
	if (*argv != NULL) 
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
