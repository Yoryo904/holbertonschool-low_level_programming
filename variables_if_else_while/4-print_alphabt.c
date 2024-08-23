#include <stdio.h>

/**
  * main - Prints only the letters e and q 
  * from the alphabet
  *
  * Return: Always 0
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
