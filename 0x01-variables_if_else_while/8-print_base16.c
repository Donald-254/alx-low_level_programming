#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
char hexaDec[] = "0123456789abcdef";
int i = 0;
	for (i = 0; i < 16; i++)
	{
		putchar(hexaDec[i]);
	}
	putchar('\n');
return (0);
}
