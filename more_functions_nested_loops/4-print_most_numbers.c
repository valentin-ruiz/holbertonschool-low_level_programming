#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - prints all number with some exception
 *
 */

void print_most_numbers(void)
{
	int number = 0;

	for (number = '0'; number <= '9'; number++)
	{
		if ((number != '2') && (number != '4'))
		{
			putchar(number);
		}
	}

	putchar('\n');
}
