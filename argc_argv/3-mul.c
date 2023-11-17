#include <stdio.h>
#include <stddef.h>
/**
*main - prints multiplication of args
*Description: prints multiplication of 2 args passed into it
*@argc: integer with count of arguments supplied to the program
*@argv: array of pointers to the string for argc arguments
*Return: 0 for success and 1 for error
*/
int main(int argc, char *argv[])
{   
    if (argv != NULL && argc > 2)
	{
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        result = a * b;
        printf("%d\n", result);
        return (0);
    }
	else
    {
        printf("Error\n");
        return (1);
    }
}