#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int i = 0;
	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
	if (i == 9)
	{
		continue;
	}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
return (0);
}
