#include <stdarg.h>

/**
  * sum_them_all - sum up all the parameters
  * @n: number of parameters
  * Return: sum of all parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	/* initialize the argument list from the start */
	va_start(args, n);

	/* iterate through all parameter values*/
	for (i = 0; i < n; i++)
		/* get the next parameter value and add it to sum*/
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
