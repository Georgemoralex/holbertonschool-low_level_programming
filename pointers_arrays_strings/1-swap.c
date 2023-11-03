#include "main.h"
/**
*swap_int - function to swap
*Description: swaps the value between 2 numbers
*@a: first number
*@b: second number
*/
void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}
