#include "main.h"

/**
 * flip_bits - RETURNING NU,BER OF BITS THAT
 * NEEDS TO FLIP
 * @n: NUM1.
 * @m: NUM2.
 *
 * Return: THE BIT NUM.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
