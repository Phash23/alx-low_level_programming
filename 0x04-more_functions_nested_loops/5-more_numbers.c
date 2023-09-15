#include "main.h"

/**
 * more_numbers - Print 10 times numbers from 0 to 14
 * Return: Everytime 0
 */

void more_numbers(void)
{
	int i;
	int m;

	for (i = 1; i <= 10; i++)
	{
		for (m = 0; m <= 14; m++)
		{
		if (m >= 10)
		_putchar('1');
	_putchar(m * 10 + '0');
		}
	_putchar('\n');
	}
}
