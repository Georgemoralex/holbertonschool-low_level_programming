#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
*print_name - function that prints a name
*Description: function that prints a name
*@array: name to be printed
*@array: name to be printed
*@f: name of the function
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int)) {

int elem;

if (size == NULL || array == NULL)
    exit(1);(
for (i = 0; i <= size; i++)
    (*action)();
return (0);
}