#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 for success
 */
int main(void)
{
	int n;
	int sum = 0;

	if (n < 1024)
	{
		while (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
			n++;
		}
	printf("%d", sum);
	}
	return (0);
}
