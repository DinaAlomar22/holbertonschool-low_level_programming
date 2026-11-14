#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to reverse.
 */
void rev_string(char *s)
{
	int left = 0;
	int right = 0;
	char temp;

	while (s[right] != '\0')
		right++;

	right--;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}
}
