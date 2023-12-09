#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*int_index - searchs an integer in an array
*Description: returns array position that meets criteria
*@array: pointer to array
*@size: size of array
*@cmp: name of the function
*Return: position of the array that meets criteria
*/

int int_index(int *array, int size, int (*cmp)(int)) {

int i = 0;
int c = 0;

if (array == NULL || cmp == NULL || size <= 0)
    return (-1);

while (c == 0)
{
    c = (*cmp)(array[i]);
    i++;
}
return (i - 1);
}