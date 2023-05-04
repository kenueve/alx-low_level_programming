#include "main.h"

/**
 * binary_to_uint - converts binary to
 * unsigned int.
 * @b: it's a binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	if (b == NULL)
		return 0;
	for (; *b != '\0'; b++) {
		if (*b != '0' && *b != '1')
			return 0;
		
		result = result << 1;
		if (*b == '1')
			result = result | 1;
	}
	
	return result;
}
