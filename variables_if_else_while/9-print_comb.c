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
		if (i < 9)
		{
		putchar(48 + i);
		putchar(44);
		putchar(32);
	}
	putchar(57);
	putchar('\n');
	return (0);
}

