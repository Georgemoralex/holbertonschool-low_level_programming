#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - function to allocate memory
*Description: allocates mem and return a status equals to 98 if function fails
*@b: size of the array to be dinamically allocated
*Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *array;
	
	array = malloc(b);
	if (array == NULL)
	{
		exit (98);
	}
	else
	{
		return (array);
	}
}
