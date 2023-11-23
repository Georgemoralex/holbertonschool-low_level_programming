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
	int **array;
    int i, j;

    array = malloc((width * height) * sizeof(int));
    if (array == NULL)
    {
        return (NULL);
    }

    if (width == 0 || height == 0)
    {
        return (NULL);
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