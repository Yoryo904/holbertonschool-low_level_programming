#include "main.h"

/**
  * more_numbers - Print 10 times the numbers since 0 to 14
  *
  * Return: 10 times of the numbers since 0 to 14
  */
void more_numbers(void)
{
	int i, o;

	for (i = 0; i < 10; i++)
	{
		for (o = 0; o <= 14; o++)
		{
			if (o > 9)
			{
				_putchar((o / 10) + '0');
			}

			_putchar((o % 10) + '0');
		}

		_putchar('\n');
	}
}
