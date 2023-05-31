#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a function that compares two strings
 * @s1: string 1 input to compare
 * @s2: string 2 input to compare
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	/**
	 * iterate through s2 and
	 * compare it with s1
	 */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/**
		 * if they differ by a single character
		 * don't iterate further
		 */
		if (s1[i] != s2[i])
		{
			/**
			 * return the difference between
			 * the two characters
			 */
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
