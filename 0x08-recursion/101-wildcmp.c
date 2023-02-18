#include "main.h"

/**
 * str_cmp - check if two strings are identical
 * @s1: sstring 1 base adress
 * @s2: strng 2 base adress
 * @i: left index
 * @j: special index
 * Return: 1 if s1 and s2 are similar, 0 if not
 */
int str_cmp(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (1);
	}
	if (s1[i] == s2[j])
	{
		return (str_cmp(s1, s2, i + 1, j + 1));
	}
	if (s1[i] == '\0' && s2[j] == '*')
	{
		return (str_cmp(s1, s2, i, j + 1));
	}
	if (s2[j] == '*')
	{
		return (str_cmp(s1, s2, i + 1, j) || str_cmp(s1, s2, i, j + 1));
	}
	return (0);
}

/**
 * wildcmp - checks if string are identical
 * @s1: base address for string 1
 * @s2: base address for string 2
 * Return: 1 if s1 and s2 are identical
 */
int wildcmp(char *s1, char *s2)
{
	return (str_cmp(s1, s2, 0, 0));
}
