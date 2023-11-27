#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*create_array - function that creates an array
*Description: creates an array and initializes with an specific char
*@size: size of the array to be created
*@c: char that will initialize in the array
*Return: 1 if digit else 0
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
