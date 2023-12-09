#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
*print_name - function pointer 
*Description: performs the function that it is pointed to
*@array: pointer to an array
*@size: size of the array
*@action: name of the function
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int)) {

int elem;

if (size == NULL || array == NULL)
    exit(1);
for (i = 0; i <= size; i++)
    (*action)();
return (0);
}