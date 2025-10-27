#include "main.h"

/**
 *_isdigit - Checks for digit
 *@c: 1 for digit character or 0 for anytihng else
 *
 *Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
