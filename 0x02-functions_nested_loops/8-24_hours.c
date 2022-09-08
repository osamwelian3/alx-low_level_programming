#include "main.h"

/**
 * jack_bauer - Prints every minute for 24 hours
 */
void jack_bauer(void)
{
	int hour, hour2, minute, minute2;

	for (hour = 48; hour <= 50; hour++)
	{
		for (hour2 = 48; hour2 <= 57; hour2++)
		{
			for (minute = 48; minute <= 53; minute++)
			{
				for (minute2 = 48; minute2 <= 57; minute2++)
				{
					if (hour >= 50 && hour2 >= 52)
						break;
					_putchar(hour);
					_putchar(hour2);
					_putchar(58);
					_putchar(minute);
					_putchar(minute2);
					_putchar('\n');
				}
			}
		}
	}
}
