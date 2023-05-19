#include <stdio.h>
/**
  *main - print aphabets in lower case and in new line
  *Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
		return (0);
}

