#include "main.h"
/**
*jack_bauer - task 8 for holberton project
*Description: 'program to display every minute of the day'
*Return: return 1 if c is lowercase and 0 otherwise
*/
void jack_bauer(void)
{
	char th[] = "012345678901234567890123";
	char tm[] = "0123456789";
	int j = 0;
	int i = 0;
	int n = 0;
	int k = 0;

	for (j = 0: j <= 2; j++)
	{
		for (i = 0; i < 24; i++)
		{
			for (n = 0; n < 6; n++)
			{
				for (k = 0; k <= 9; k++)
				{
					_putchar(th[j]);
					_putchar(th[i]);
					_putchar(':');
					_putchar(tm[n]);
					_putchar(tm[k]);
					_putchar('\n');
				}
			}
		}
	}
}
