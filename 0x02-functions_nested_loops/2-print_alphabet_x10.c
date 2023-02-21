#include "main.h"

/**
 * print_alphabet_10x - Entry point
 * Description: Alphabet
 * Result: void
 */

void print_alphabet_10x(void)
{
	char c;
	int i = 0;

	while (1 <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
		i++;
	}
}
