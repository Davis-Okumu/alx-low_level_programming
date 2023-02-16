#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string whose lenght is retuned.
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (strlen(s))
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
