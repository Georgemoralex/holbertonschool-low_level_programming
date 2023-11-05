#include "main.h"
#include <stdio.h>
/**
*print_array - function to print n numbers of array
*Description: print n numbers from an array separated by commas
*@s: array of numbers
*@n; number of elements from array to be printed
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
