#include "main.h"
#include <stdio.h>
/**
*print_array - function to print n numbers of array
*Description: print n numbers from an array separated by commas
*@a: array of numbers
*@n: number of elements from array to be printed
*/
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[n - 1]);
	}
	else
	{
		printf("\n");
	}
}
