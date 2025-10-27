#include "main.h"
#include <stdio.h>

/**
 * print_numbers - writing the numbers
 *
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
