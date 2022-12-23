#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to first string to compare
 * @s2: pointer to second string to compare
 * Return: compariton deference.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int difference = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] - s2[i] != 0)
		{
			difference = s1[i] - s2[i];
			break;
		}
	}
	if (difference == 0 && s1[i] == '\0')
	{
		difference = s1[i] - s2[i];
	}
	return (difference);
}
