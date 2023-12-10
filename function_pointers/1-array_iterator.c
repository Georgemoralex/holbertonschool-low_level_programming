#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*array_iterator - function pointer
*Description: performs the function that it is pointed to
*@array: pointer to an array
*@size: size of the array
*@action: name of the function
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

size_t i;

if (size <= 0 || array == NULL || action == NULL)
	exit(1);
for (i = 0; i < size; i++)
	(*action)(array[i]);
}
