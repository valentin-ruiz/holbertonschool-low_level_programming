#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *Return: pointer to s
 */
char *leet(char *s)
{
	int i, j;
	char keys[] = "aAeEoOtTlL";
	char repl[] = "43071";

	for (i = 0; s[i]; i++)
		for (j = 0; s[j]; j++)
			if (s[i] == keys[j])
			{
				s[i] = repl[j / 2];
				break;
			}
	return (s);
}
