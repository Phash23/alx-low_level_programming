#include <stdio.h>
/**
 * main - Single digit backward
 *
 * Return: Everytime 0 (success)
 */
int main(void)
{
	int letters;

	for (letters = 122; letters >= 97; letters--)
	{
		putchar((char)letters);
	}
	putchar('\n');
	return (0);
}
