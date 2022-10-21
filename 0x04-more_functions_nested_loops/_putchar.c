#include <unistd.h>
#include "main.h"

/**
 * _putchar - write character
 * @c: the character
 * Return on sucess 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
