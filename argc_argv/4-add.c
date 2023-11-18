#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*main - prints adds of positive numbers
*Description: only positive numbers are added, all others are erros
*@argc: integer with count of arguments supplied to the program
*@argv: array of pointers to the string for argc arguments
*Return: 0 for success and 1 for error
*/
int main(int argc, char *argv[])
{   
int i, j, k, s1, sum = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (argv[i][0] == '-')
{
s1 = strlen(argv[i]);
for (k = 1; k < s1; k++)
{
if (isdigit(argv[i][k]) == 0)
{
printf("Error\n");
return (1);
}
}
}
else
{
s1 = strlen(argv[i]);
for (j = 0 ; j < s1; j++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
}

if (atoi(argv[i]) > 0)
{
sum += atoi(argv[i]);
}
}
} 
printf("%d\n", sum);
return (0);
}