#include "main.h"

/**
 *_islower - Checks for lowercase character
 *@c: 1 for lowercase character or 0 for anytihng else
 *
 *Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
