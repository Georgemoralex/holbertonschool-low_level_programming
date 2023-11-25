#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*alloc_grid - 
*Description: allocate memory for a 2D array give a width and a height
*@width: width of the array
*@height: height of the array
*Return: a pointer to a 2D array or NULL on failure
*/
int **alloc_grid(int width, int height)
{
    int i, j;
    int **array = malloc(sizeof(int *) * width);

    if (width == 0 || height == 0)
        return (NULL);
    
    for (int i = 0; i < height; i++)
        array[i] = malloc(sizeof(int) * width);
    
    if (array == NULL)
        free(array);
        return (NULL);

    return (array);
}