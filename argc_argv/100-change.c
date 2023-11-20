#include <stdio.h>
#include <stdlib.h>

/**
*mod - minimal number of coins for change
*Description: prints min # of coins for change
*@cents: integer with count of arguments supplied to the program
*@mod: modulus from operation
*@small: smallest number from result array
*Return: total coins needed
*/

int module(int cents, int mod, int small)
{
	int r[5], i, modp;
	int coins[] = {25, 10, 5, 2, 1};
	int t = 0;

	while (mod != 0){
		if (cents != 1){
			for (i = 0; i < 5; i++){
				r[i] = cents / coins[i];
				if (r[i] < 1){
					r[i] = 0;}
                                if (i == 0 && r[i] != 0){
					small = r[i];
					modp = i;}
                                else{
					if (r[i] < small && r[i] != 0){
                                                small = r[i];
                                                modp = i;}
				}
			}
		}
		else{
			t += 1;
			return (t);}
		mod = cents % coins[modp];
		cents = mod;
		t += r[modp];
		small = cents;
	}
	return (t);
}

/**
*main - minimal number of coins for change
*Description: prints min # of coins for change
*@argc: integer with count of arguments supplied to the program
*@argv: array of pointers to the string for argc arguments
*Return: 0 for negative numbers and 1 for error
*/

int main(int argc, char *argv[])
{
	int  mod = 1;
	int small, cents;
	int total = 0;

	if (argc > 2 || argc == 1)
	{printf("Error\n");
	return (1);}

	if (*argv[1] == '-')
	{
		printf("0\n");
		return (0);
	}
	
	cents = atoi(argv[1]);
	small = cents;

	if (cents == 0)
	{
		printf("%d\n", total);
		return (0);
	}

	total = module(cents, mod, small);
	printf("%d\n", total);
	return (0);
}
