#include "main.h"

/**
 *_isupper - Checks for uppercase character
 *@c: 1 for uppercase character or 0 for anytihng else
 *
 *Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)

{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
