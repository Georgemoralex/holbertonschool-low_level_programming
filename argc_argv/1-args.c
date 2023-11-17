#include <stdio.h>
#include <stddef.h>
/**
*main - prints number of args
*Description: prints all arguments passed into it
*@argc: integer with count of arguments supplied to the program
*@argv: array of pointers to the string for argc arguments
*Return: 0 for success 
*/
void main(int argc, char *argv[])
{
    if (argv != NULL)
    {
        printf("%d\n", (argc - 1));
    }
    else
    {
        printf("0\n");
    }
}