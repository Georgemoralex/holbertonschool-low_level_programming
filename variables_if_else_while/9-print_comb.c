#include <stdio.h>
/**
*main - 2 print alphabet
*Description: program to print alphabet
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(abc[i]);
		putchar(44);
	}
	putchar('\n');
	return (0);
}

