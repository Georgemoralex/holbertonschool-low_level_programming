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
    int sum = 0;
    int i;
    int t;

  if (argc > 1)
    {
        for (i = 1; i < argc; i++)
        {
          t = isdigit(*argv[i]);
          if (t > 0)
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
    printf("%d\n", sum);
    return (0);
}