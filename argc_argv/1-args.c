#include <stdio.h>
/**
*main - prints number of args
*Description: prints all arguments passed into it
*@argc: integer with count of arguments supplied to the program
*@argv: array of pointers to the string for argc arguments
*Return: 0 for success 
*/
int main(int argc, char *argv[])
{
    int i;

    if (argc > 0)
    {
        for (i = 0; i < argc , i++)
            printf("%s\n",argv[i]);
    }
    return (0);
}