#include "main.h"

/**
 * jack_bauer - print the hours
 * and minutes of the day.
 *
 *Return: void
 */

void jack_bauer(void)
{
	int hr, h, min, m;

	for (h = 0; h <= 2; hr++)
	{
		for (hr = 0; hr <= 9; hr++)
		{
			if ((h <= 1 && hr <= 9) || (h <= 2 && hr <= 3))
			{
				for (m = 0; m <= 5; m++)
				{
					for (min = 0; min <= 9; min++)
					{
					_putchar(h + '0');
					_putchar(hr + '0');
					_putchar(58);
					_putchar(m + '0');
					_putchar(min + '0');
					_putchar('\n');
					}
				}
			}
		}
	}
}
