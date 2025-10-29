#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: the sting to measure
 *
 * Return: result of the length.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
