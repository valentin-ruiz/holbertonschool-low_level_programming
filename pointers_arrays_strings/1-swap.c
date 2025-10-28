#include "main.h"

/**
 * swap_int - swap the value of a and b
 * @a: integer a
 * @b: integer b
 * return : nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
