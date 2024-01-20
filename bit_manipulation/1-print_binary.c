#include "main.h"

/**
 * print_binary - converts unsigned long int to binary
 * @n: decimal number
 * Return: converted number.
 */

 void print_binary(unsigned long int n)
 {
    float num_f;
    int num_i;

    num_i = num_f = n;

    while (num_i != 0)
    {
        num_f *= .5;
        num_i *= .5;
        remainder = num_f - num_i;
        if (remainder == 0)
            _putchar('48');
        else
            _putchar('49');
    }
 }