#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'
		    || str[i - 1] == '\n' || str[i - 1] == ','
		    || str[i - 1] == ';' || str[i - 1] == '.'
		    || str[i - 1] == '!' || str[i - 1] == '?'
		    || str[i - 1] == '"' || str[i - 1] == '('
		    || str[i - 1] == ')' || str[i - 1] == '{'
		    || str[i - 1] == '}')
		{
			for (j = 0; separators[j] != '\0'; j++)
			{
				if (str[i - 1] == separators[j] || i == 0)
				{
					if (str[i] >= 'a' && str[i] <= 'z')
						str[i] = str[i] - ('a' - 'A');
					break;
				}
			}
		}
		i++;
	}

	return (str);
}
