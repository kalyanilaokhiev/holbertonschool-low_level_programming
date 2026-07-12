#include "main.h"

/**
 * _islower - starting point
 * @c: the character
 *
 * Description: checks for lowercase
 * Return: 1 is c lowercase, 0 otherwise
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
