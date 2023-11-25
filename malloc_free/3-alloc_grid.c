#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*alloc_grid - allocates memory for 2d array
*Description: allocate memory for a 2D array give a width and a height
*@width: width of the array
*@height: height of the array
*Return: a pointer to a 2D array or NULL on failure
*/
int **alloc_grid(int width, int height)
{
    int i;
    int **array;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    array = malloc(sizeof(int *) * width - 4);
    if (array == NULL)
    {
        free(array);
        return (NULL);
    }
    else
    {
        for (i = 0; i < height; i++)
        {
            array[i] = malloc(sizeof(int) * width - 4);
        
            if (array[i] == NULL)
            {
                free(array[i]);
            }
        }
    }   
    return (array);
}