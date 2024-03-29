#include "main.h"

/**
 * _strlen_recursion - Prints length of string
 * @s: The string to be printed
 * Return: The length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * pal_check - Check is string is palindrome
 * @s: string base adress
 * @i: left index
 * @j: right index
 * Return: 1 if s is palindrome, 0 if not
 */
int pal_check(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
		{
			return (pal_check(s, i + 1, j - 1));
		}
	}
	else
	{
		return (0);
	}

}

/**
 * is_palindrome - check if s is palindrome
 * @s: base adress of string
 * Return:1 if s is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (pal_check(s, 0, _strlen_recursion(s) - 1));
}
