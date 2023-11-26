#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*free_grid - free space reserved from our alloc grid function
*Description: frees 2D array previously created by alloc_grid function
*@grid: 2d array that will be freed
*@height: height of the array to be freed
*Return: void nothing to return
*/
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
}