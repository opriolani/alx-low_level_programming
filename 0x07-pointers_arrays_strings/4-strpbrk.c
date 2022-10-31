#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s:first occurrence in the string
 * @accept: matches one of the bytes, or @NULL
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
