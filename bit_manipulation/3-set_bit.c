#include "main.h"

/**
 * set_bit - set an specific bit to 1
 * @n: bin number
 * @index: index to set 1
 * Return: 1 if succesfull or negative value if error
 */


int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
    {
        return (-1);
    }
    *n |= 1 << index;
    return (1);
}