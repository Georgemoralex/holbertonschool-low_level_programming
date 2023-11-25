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
    int i, j;
    int **array;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    array = malloc(sizeof(int *) * height);
    if (array == NULL)
    {
        free(array);
        return (NULL);
    }
    
    
    
    for (i = 0; i < height; i++)
    {
        array[i] = malloc(sizeof(int) * width);
    
        if (array[i] == NULL)
        {
            for (i--; i > 0; i--)
            {
                free(array[i]);
            }
            free(array);
            return (NULL);
        }
    }

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            array[i][j] = 0;
        }
    }

    return (array);
}