#include "main.h"

/**
 *_isdigit - Entry point
 *Description: Checks for a digit (0 through 9)
 *Return:1 if true (success), 0 if false (success)
 */
int _isdigit(int c)
{
	if (int c >= '0' && int c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
