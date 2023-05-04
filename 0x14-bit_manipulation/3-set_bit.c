#include "main.h"

/**
 * set_bit - BIT VALUE SET AS 1
 * ON THE GIVEN INDEX.
 * @n: POINBTER 
 * @index: BIT INDEX.
 *
 * Return: IF IT IS WORKIN 1 OTHER -1
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
