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
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");

	return (0);
}
