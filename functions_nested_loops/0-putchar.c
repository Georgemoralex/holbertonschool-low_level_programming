#include "main.h"
/**
*main - 0 putchar
*Description: program to print _putchar
*Return: Always 0 (Success)
*/
int main(void)
{
	char abc[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(abc[i]);
	}
	_putchar('\n');
	return (0);
}

