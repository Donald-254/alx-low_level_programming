#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{

int i;
int j;
int k;

for (i = 0; i < 8; i++)
{
	for (j = i; j < 9; j++)
	{
		for (k = j; k <= 9; k++)
		{
			if (i != j && i != k && j != k)
			{
				int num = i * 100 + j * 10 + k;
				int rev = k * 100 + j * 10 + i;

				if (num != rev)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
	putchar('\n');
return (0);
}
