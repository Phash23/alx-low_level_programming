#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: Everytime 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			i++;
		}
		putchar((char)i);
	}
	putchar('\n');
	return (0);
}
