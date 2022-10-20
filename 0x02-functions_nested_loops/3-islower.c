#include "main.h"

/**
 * islower - check if char is lower
 * @c: is char that needs to be checked
 * Return: 1 if char is lowercase, else 0
 */

int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
