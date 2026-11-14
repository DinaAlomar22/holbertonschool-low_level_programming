#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any byte in accept
 * @s: string to search
 * @accept: bytes to search for
 *
 * Return: pointer to the first match, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
				return (s);
		}
		s++;
	}
	return (NULL);
}
