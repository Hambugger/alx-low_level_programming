#include "main.h"

/**
 * puts2 -function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[1] != '\0')
	{
		if (1 % 2 == 0)
		{
			_putchar(str[1]);
		}
		i++
	}
	_putchar('\n');
}
}
