#include <stdio.h>
#include <stdlib.h>

/**
*main - minimal number of coins for change
*Description: prints min # of coins for change
*@argc: integer with count of arguments supplied to the program
*@argv: array of pointers to the string for argc arguments
*Return: 0 for negative numbers and 1 for error
*/

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int result[5];
	int i, mod = 1, modOp, smallest, cents, total = 0;

	if (argc > 2 || argc == 1)
	{printf("Error\n");
	return (1);}

	if (*argv[1] == '-')
	{
		printf("0\n");
		return (0);
	}
	cents = atoi(argv[1]);
	smallest = cents;

	if (cents == 0)
	{
		printf("%d\n", total);
		return (0);
	}

	while (mod != 0)
	{
		if (cents != 1)
		{
			for (i = 0; i < 5; i++)
			{
				result[i] = cents / coins[i];
				if (result[i] < 1)
				{
					result[i] = 0;
				}
				if (i == 0 && result[i] != 0)
				{
					smallest = result[i];
					modOp = i;
				}
				else
				{
					if (result[i] < smallest && result[i] != 0)
					{
						smallest = result[i];
						modOp = i;
					}
				}
			}
		}
		else
		{
			total += 1;
			printf("%d\n", total);
			return (0);
		}
		mod = cents % coins[modOp];
		cents = mod;
		total += result[modOp];
		smallest = cents;
	}
	printf("%d\n", total);
	return (0);
}
