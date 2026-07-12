#include "main.h"

/**
 * _isupper - starting point
 * @c: letter input
 *
 * Return: 1 id c upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
