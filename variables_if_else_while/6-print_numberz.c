#include <stdio.h>
/**
*main - 2 print alphabet
*Description: program to print alphabet
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');
	return (0);
}
