#include "main.h"
/**
*main - 0 1-alphabet
*Description: program to print alphabet with prototypes
*Return: void
*/
void print_alphabet(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(abc[i]);
	}
	_putchar('\n');
}
