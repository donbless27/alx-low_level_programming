#include "main.h"
#include <stdio.h>

/**
  * _strncpy - function that copies a string.
  * @dest: pointer to destination input
  * @src: pointer to source input
  * @n: n number of bytes @src
  * Return: @dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	  *iterate through src array
	  *where if there is no null byte among
	  *the first n bytes of sr, the string placed
	  * in the dest will not be null terminated
	  */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	  *if the length of src is les than n
	  *write additional null bytes to dest to
	  *ensure that a total of n bytes is written
	  */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

