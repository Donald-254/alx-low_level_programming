#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 success
 *
 */
int main(void)
{
	long int count;
	long int num = 612852475143;
	long int largest;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			num = num / count;
			largest = count;
		}
	}
	printf("%ld\n", largest);
	return (0);
}
