#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
    mask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8) {
		return -1;
	}
	if ((n & mask) == 0) {
		return 0;
	} else {
		return 1;
	}
}