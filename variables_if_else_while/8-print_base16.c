#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = '0';

	char letterg = 'a';

	while (letter <= '9')

	{
		putchar(letter);
		letter++;
	}

	while (letterg <= 'f')

	{
		putchar(letterg);
		letterg++;
	}
putchar('\n');

return (0);
}
