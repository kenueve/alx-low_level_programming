#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a string of 0 and 1 chars.
 *
 * Return: the converted number
 * b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			num = num << 1;
		}
		else if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (num);
}
