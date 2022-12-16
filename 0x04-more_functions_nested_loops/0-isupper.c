#include "main.h"

/**
 *_isupper - Entry point
 *Description: Checks for uppercase letters
 *Return:Always 0 (success)
 *Return: 1 if c is uppercase(true), otherwise 0 (false)
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
