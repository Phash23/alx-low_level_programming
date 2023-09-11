#include <stdio.h>
/**
 * main - combination
 *
 * Return: Everytime 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}
