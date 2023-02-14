#include "main.h"

/**
 * _strstr - find first occurence of a given string in another string
 * @haystack: String to search
 * @needle: string to search for
 * Return: pointer to beginning of lacated string
 */
char *_strstr (char *haystck, char *needle)
{
	char *i, *j;

	while (strlen (haystack))
	{
		i = haystack;
		j = needle;
		while (*j == *haystack && *haystack != 0 && *i !=0)
		{
			haystack++;
			j++;
		}
		if (*j == 0)
		{
			return (i);
		}
		haystack = i +1;
	}
	return (0);
}
