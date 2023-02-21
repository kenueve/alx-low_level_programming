/**
 * main: Entry point
 *
 * Description: printing _putchar without the use of stdio.h
 *
 *
 *return: zero success
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
