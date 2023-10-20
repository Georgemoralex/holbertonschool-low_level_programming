#include <stdio.h>
/**
*main - 0 1-alphabet
*Description: program to print alphabet with prototypes
*Return: Always 0 (Success)
*/
void print_alphabet(void);
int main(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}

