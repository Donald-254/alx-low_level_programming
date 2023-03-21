#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	int i;
	long long int f =0;
	long long int s = 1;
	long long int n;

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
		printf("%lld, ", n);
	}
return (0);
}
