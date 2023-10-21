#include "main.h"
/**
*jack_bauer - task 8 for holberton project
*Description: 'program to display every minute of the day'
*Return: return 1 if c is lowercase and 0 otherwise
*/
void jack_bauer(void)
{
	char t3[] = "0123456789";
	char t4[] = "0123456789";
	int n = 0;
	int k = 0;

	for (n = 0; n < 6; n++)
	{
		for(k = 0; k <= 9; k++)
		{
			_putchar(t3[n]);
			_putchar(t4[k]);
			_putchar('\n');
		}
	}
}
