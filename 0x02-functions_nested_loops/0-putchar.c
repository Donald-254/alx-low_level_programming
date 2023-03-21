#include <stdio.h>
/**
 * main - Entry point to the program
 * Return: 0 for success
 */
int main(void)
{
	int i;
	char a[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < 8; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}

