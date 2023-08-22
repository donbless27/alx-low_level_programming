#include "main.h"
#include <stdio.h>

/**
  * _strcat - function that concatenate two strings.
  * @dest: pointer to the destination input
  * @src: pointer to the source input
  * Return: @dest pointer
  */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a]) /*find the size of dest arry*/
		a++;
	/* iterate through each src value without the null byte */
	for (b = 0; src[b]; b++)
	/*append src[b] to dest[a] while over writting the null byte in dest */
		dest[a++] = src[b];
	return (dest);
}
