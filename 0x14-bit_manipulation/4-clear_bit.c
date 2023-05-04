#include "main.h"

/**
 * clear_bit IT VALUES THE BIT AS 0.
 * ON THE GIVEN INDEX.
 * @n: POINTER.
 * @index: BIT INDX.
 *
 * Return: IF IT'S WORKING , OTHER -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
