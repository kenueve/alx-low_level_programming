#include "main.h"

/**
 * get_endianness -ENDIANESS CHECK
 *
 * Return: WHEN BIGENDIAN 0, OTHER 1
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
