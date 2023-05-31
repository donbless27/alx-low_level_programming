#include "main.h"
#include <stdio.h>

/**
  * _strncat - function that concatenates two strings.
  * @dest: pointer to the destination input
  * @src: pointer to the source input
  * @n: n number of bytes from @src
  * Return: @dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int a, c;

	a = 0;
	/*find size of dest array*/
	while (dest[a])
		a++;
	/**
	  *src does not need to be null terminated
	  *if it contains n or more bytes
	  */
	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[a + c] = src[c];
	/*null terminate dest*/
	dest[a + c] = '\0';
	return (dest);
}
