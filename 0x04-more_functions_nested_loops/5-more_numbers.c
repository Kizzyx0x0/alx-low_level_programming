#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14 ten times
 * 
 */
void more_numbers(void)
{
	int i;
	int k;

	for (k = '0' ; k <= '9'; k++)
	{
		for (i = '0'; i <= '14'; i++)
		{
			if (i < 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
