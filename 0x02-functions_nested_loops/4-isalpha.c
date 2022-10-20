#include "main.h"

/**
 * _isalpha - checks for char alphabet
 * @c: char to be checked
 *
 * Return: 1 if letter of char is lower or upper, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
