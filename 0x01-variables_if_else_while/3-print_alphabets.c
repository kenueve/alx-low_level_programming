#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters lowercase then uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
