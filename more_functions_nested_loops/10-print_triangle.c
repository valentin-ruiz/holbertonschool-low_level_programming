#include "main.h"
#include <stdio.h>

/**
 *print_triangle - function to print the triangle
 *@size: For the size
 *_putchar: it's for write a character
 *Return: nothing
 *
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
