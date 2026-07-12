#include "main.h"

/**
 * _isalpha - starting point
 * @c: the character
 *
 * Description: checks is alphabet
 * Return: 1 is c a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
