#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - the last digit
*Description: print the last digit of the random number
*Return: Always 0 (Success)
*/
int lastDigit(void)
{
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastD = n % 10;
	if (lastD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastD);
	}
	else if (lastD < 6 && lastD != 0)
	{
		printf("Last digit of %d is %d and is less than 6", n, lastD);
	}
	else (lastD == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastD);
	}
	return (0);
}
