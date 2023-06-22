#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - function that print numbers followed by \n
  * @separator: the string to be printed between numbers
  * @n: input variables
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int numbs;

	/* initialize from the start */
	va_start(args, n);
	/*iterate through each argument*/
	for (numbs = 0; numbs < n; numbs++)
	{
		/* print next argument */
		printf("%d", va_arg(args, int));
		/* print separator only btw arguments */
		if (separator && numbs != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(ap);
	print("\n");
}
