#include "main.h"

/**
 * cap_string - capitalizes the first letter of each word
 * @str: string to capitalize
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;
	int j;
	int new_word = 1;

	while (str[i] != '\0')
	{
		if (new_word && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		new_word = 0;
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				new_word = 1;
				break;
			}
		}
		i++;
	}
	return (str);
}
