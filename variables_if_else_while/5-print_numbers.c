#include <stdio.h>
/**
*main - 2 print alphabet
*Description: program to print alphabet
*Return: Always 0 (Success)
*/
int main(void)
{
	char abc[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}

