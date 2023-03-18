#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{

int i;
int j;

for (i = 0; i < 9; i++)
{
	for (j = i; j <= 9; j++)
	{
		if (i != j)
		{
			int num = i * 10 + j;
			int rev = j * 10 + i;

			if (num != rev)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
	putchar('\n');
return (0);
}
