#include "main.h"
#include <stdlib.h>
/**
*_calloc - function that allocates memory for an array
*Description: memory for an array of certain nmemb of size bytes each
*@nmemb: number of elements of the array
*@size: size in bytes of the elements
*Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    int *array;
    unsigned int i, j;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }

    array = malloc(nmemb *size);
    if (array == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < (nmemb); i++)
    {
        array[i] = 0;
    }

    return (array);
}