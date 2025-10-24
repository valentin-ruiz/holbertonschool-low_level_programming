#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	char letterg = 'A';

	while (letter <= 'z')

	{
		putchar(letter);
		letter++;
	}

	while (letterg <= 'Z')

	{
		putchar(letterg);
		letterg++;
	}
putchar('\n');

return (0);
}
