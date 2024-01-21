#include "main.h"

/**
 * print_binary - converts unsigned long int to binary
 * @n: decimal number
 * Return: converted number.
 */

 void print_binary(unsigned long int n)
 {
	int remainder;
	unsigned long int binary_result = 0;
    int place_value = 1;
	int length = 0;
	int x, digit;

	while (n > 0)
	{
		remainder = n & 1;
		binary_result |= remainder * place_value;
		place_value <<= 1;
		n >>= 1;
		length += 1;
	}
	if (length == 0) {
		_putchar('0');
    } else {
	for (x = (length - 1); x >= 0; x--)
	{
		digit = (binary_result >> x) & 1;
		_putchar(digit + '0');
	}
 }
 }