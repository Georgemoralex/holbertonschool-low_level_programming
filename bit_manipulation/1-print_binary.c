#include "main.h"

/**
 * print_binary - converts unsigned long int to binary
 * @n: decimal number
 * Return: converted number.
 */

 void print_binary(unsigned long int n)
 {
	int remainder;
	int binary_result = 0;
    int place_value = 1;

	while (n > 0)
	{
		remainder = n & 1;
		binary_result |= remainder * place_value;
		place_value <<= 1;
		n >>= 1;
	}
	return binary_result;
 }