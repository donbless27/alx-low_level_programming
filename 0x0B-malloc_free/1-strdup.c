#include "main.h"
#include <stdlib.h>
/**
  * _strdup - that returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: string to duplicate
  * Return: 0
  */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, ln;

	i = 0;
	ln = 0;

	if (str == NULL)
		return (NULL);

	while (str[ln])
		ln++;

	dup = malloc(sizeof(char) * (ln + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
