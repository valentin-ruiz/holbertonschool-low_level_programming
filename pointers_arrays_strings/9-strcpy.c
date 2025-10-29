#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Description: copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src)
	{
		*d++ = *src++;
	}
	*d = '\0';
	return (dest);
}
