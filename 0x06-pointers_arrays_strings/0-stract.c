#include "main.h"

/**
 * *_strcat - contacetas a string to another one
 *
 * @dest: a pointer the the first string
 * @src: a pointer to the string we want to add to the first one
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int i = 0;

	while (dest[i++])
		c++;
	for (i = 0; src[i]; i++)
		dest[c++] = src[i];
	return (dest);
}
