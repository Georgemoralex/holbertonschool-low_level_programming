#include "main.h"
/**
*print_alphabet_10x - task 2-alphabet
*Description: program to print alphabet 10x
*Return: void
*/
void print_alphabet_x10(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(abc[i]);
		}
		_putchar('\n');
	}
}
