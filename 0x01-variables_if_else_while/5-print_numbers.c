#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints single digit numbers from base 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	char output[11];

	for (i = 0; i < 10; i++)
	{
		output[i] = i + '0';
	}
		output[10] = '\0';
		printf("%s", output);
	return (0);
}
