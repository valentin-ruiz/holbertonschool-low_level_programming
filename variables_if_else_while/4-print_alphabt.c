#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}
	}

	putchar('\n');
	return (0);
}
