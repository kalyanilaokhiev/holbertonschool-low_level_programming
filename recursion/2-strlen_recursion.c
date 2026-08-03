#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: pointer of string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int letter;

	if (*s == '\0')
		return (0);

	/* calling func to get eacg letter */
	letter = _strlen_recursion(s + 1);

	/* adding 1 to every letter */
	return (letter + 1);
}
