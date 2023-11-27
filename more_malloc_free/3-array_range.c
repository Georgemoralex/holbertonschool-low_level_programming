#include "main.h"
#include <stdlib.h>
/**
*array_range - function that creates an array of integers
*Description: array with values from min to max and ordered from min to max
*@min: min number
*@max: max number
*Return: pointer to allocated memory
*/
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
