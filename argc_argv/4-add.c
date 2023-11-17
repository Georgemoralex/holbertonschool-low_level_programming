#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - prints adds of positive numbers
*Description: only positive numbers are added, all others are erros
*@argc: integer with count of arguments supplied to the program
*@argv: array of pointers to the string for argc arguments
*Return: 0 for success and 1 for error
*/
int main(int argc, char *argv[])
{   
    int sum;
    int i;
    
    if (argc > 2)
    {
        for (i = 1; i < argc; i++)
        {
            if (isdigit(argv[i]) == 0)
            {
                if (atoi(argv[i]) > 0)
                {
                    sum += atoi(argv[i]);
                }
            }
            else
            {
                printf("Error\n");
                return (1);
            }
        }
    }
    else
    {
        printf("0\n");
    }
    printf("%d", sum);
}