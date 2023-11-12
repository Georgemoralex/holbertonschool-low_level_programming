#include "main.h"
/**
*print_chessboard - function to print chessboard
*Description: prints all characters of array a
*@a: 2d array with 8 characters in each row
*Return: void
*/
void print_chessboard(char (*a)[8])
{
	int counter = 0;
	int i;

	while (counter < 8)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(*(*(a + counter) + i));
		}
		_putchar(10);
		counter++;
	}
}
