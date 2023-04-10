#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument counts
 * @argv: arguments passed
 * Return: success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
