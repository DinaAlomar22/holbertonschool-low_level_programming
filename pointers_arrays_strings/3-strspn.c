#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to examine
 * @accept: bytes allowed in the prefix
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *p;

	while (*s != '\0')
	{
		found = 0;
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
		s++;
	}
	return (count);
}
