#include "main.h"

/**
 *_isupper - Checks for uppercase letters
 *@c value that is checked
 *Return: 1 if c is alphabet ,else 0
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
