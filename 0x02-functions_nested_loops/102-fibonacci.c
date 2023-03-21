#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	int i;
	int f = 0;
	int s = 1;
	int n;

	for (i = 0; i < 50; i++)
	{
		if (i <= 1)
		{
			n = i;
		}
		else
		{
			n = f + s;
			f = s;
			s = n;
		}
		printf("%d, ", n);
	}
return (0);
}
