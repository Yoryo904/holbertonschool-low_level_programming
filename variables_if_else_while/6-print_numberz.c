#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 9
  * now with a variable type integer.
  *
  * Return: Always 
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
