#include "main.h"
#include <stdio.h>

/**
 *print_triangle - function to print the triangle
 *@size: For the size
 *Return: nothing
 *
 */

void print_triangle(int size)
{
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			putchar("*");
		}
		putchar(" ");
	}
}
