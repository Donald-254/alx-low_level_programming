#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	int i;
	long int f = 0;
	long int s = 1;
	long int n;

	for (i = 1; i <= 50; i++)
	{
		if (i < 50)
		{
			n = f + s;
			f = s;
			s = n;
			printf("%ld, ", n);
		}
		else if (i == 50)
		{
			n = f + s;
			f = s;
			s = n;
			printf(",%ld\n", n);
		}
	}
	return (0);
}
