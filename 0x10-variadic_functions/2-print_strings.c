#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - function that print strings followed by \n
  * @separator: the string to be printed btw the strings
  * @n: number of strings passed to the function
  * Return: void
  */

void print_strings(const *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int numbs;
	char *str;

	/* initialize the argument list frm the start */
	va_start(args, n);
	/* iterate through each argument */
	for (numbs = 0; numbs < n; numbs++)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && numbs != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
