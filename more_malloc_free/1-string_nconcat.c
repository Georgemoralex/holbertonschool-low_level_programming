#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - Write a function that concatenates two strings.
*Description: The returned pointer shall point to a newly allocated space in memory
*@s1: string 1
*@s2: string 2
*@n: n bytes of the second string
*Return: pointer to allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *conc;
    unsigned int length_s1, length_s2, length_conc;
    unsigned int i;

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    for (length_s1 = 0; s1[length_s1] != '\0'; length_s1++)
    for (length_s2 = 0; s2[length_s2] != '\0'; length_s2++)
    if (n > length_s2)
    {
        n = length_s2;
    }
    length_conc = length_s1 + n;
    conc = malloc(length_conc + 1);
    if (conc == NULL)
    {
        return (NULL);
    }
    for (i =0; i < length_conc; i++)
        if (i < length_s1)
        {
            conc[i] = s1[i];
        }
        else
        {
            conc[i] = s2[i - length_s1];
        }
    
    conc[i] = '\0';
    return (conc);
}