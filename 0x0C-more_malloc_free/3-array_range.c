#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: success
 */
int *array_range(int min, int max)
{
	int size, i;
	int *str;

	size = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	str = malloc(sizeof(int) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		str[i] = min++;
	}
	return (str);
}
