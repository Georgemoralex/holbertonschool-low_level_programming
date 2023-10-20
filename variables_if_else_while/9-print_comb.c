#include <stdio.h>
/**
*main - 2 print alphabet
*Description: program to print alphabet
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(48 + i);
		putchar(44);
		putchar(32);
	}
	putchar(57);
	return (0);
}
