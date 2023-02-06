#include "main.h"

/**
 * flip_bits - counts the number of bits
 * @n: the number
 * @m: the number to flip
 * return: the necessary number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
