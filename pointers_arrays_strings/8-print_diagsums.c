#include "main.h"
#include <stdio>
/**
*print_diagsums - sum array diagonals
*Description: sums the 2 main diagonals of the given array
*@a: pointer to an array of integers
*@size: size of the array
*Return: void
*/
void print_diagsums(int *a, int size)
{
	int row = 0;
	int sumUp = 0;
	int sumDown = 0;

	while (row < size)
	{
		sumUp += *(a + row*size + row);
		row++;
	}
	row = 0;
	while (row < size)
	{
		sumDown += *(a + row * size + (size - row - 1));
		row++;
	}
	printf("%d, %d\n", sumUp, sumDown);
}
