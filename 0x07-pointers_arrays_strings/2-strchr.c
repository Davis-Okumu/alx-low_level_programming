#include "main.h"

/**
 *_strchr - function that locates a character in a sting
 * @s: memory area that points to s
 * @c: character in a string
 * Return: A charchter or Null
 */
char *_strchr(char *s, char c)
{
	while (strlen(s))
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (NULL);
}
