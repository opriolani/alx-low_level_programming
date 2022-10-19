#include "main.h"

/**
 * print_alphabet_x10 - prints alpa 10 times
 * Retur: Always 0
 */
void print_alphabet_x10(void)
{
	int ten;
	int la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la = 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
