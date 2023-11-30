#include <stdlib.h>
#include <stdio.h>

/**
*main: program to print name of the file it was compiled from
*Description: shows the name of the program it was compiled from
*return: 0 if success
*/

int main(void)
{
    printf("%s\n", __FILE__);
    return (0);
}