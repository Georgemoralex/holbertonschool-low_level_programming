#include "main.h"
/**
*times_table - task 9 for holberton project
*Description: 'program to print 9 times table'
*Return: doesnt return anything
*/
void times_table(void)
{
	int digits[] = "0123456789"
	int i = 0;
	int j = 0;
	int result = 0;
	int countResult = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = (digits[i] - '0') * (digits[j] - '0');
			countResult = countDigits(result);
			if ( (j == 0) )
			{
				_putchar(48);
			}
			else if ( (j == 9) && (result == 0) )
			{
				_putchar(48);
			}
			else if ( (j == 9) && (countResult != 1) )
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if ( (countResult == 1) || (result == 0) )
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(32);
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');

			}
		}
		_putchar('\n');
	}
}
/**
*countDigits - auxiliary function
*Description: 'function to count number of digits'
*@n: number to be counted
*Return: return the count of digits
*/
int countDigits(int n)
{
	int count = 0;
	while (n != 0) {
		n /= 10;
		++count;
	}
	return count;
}
