#include "main.h"

/**
 * string_toupper - change lowercase characters to uppercase
 *
 * @str: a strng
 *
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
