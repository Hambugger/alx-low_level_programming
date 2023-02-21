#include "main.h"

/**
 * _islower - Entry point
 * @c: The interget value
 * Return: 1 of true, 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
