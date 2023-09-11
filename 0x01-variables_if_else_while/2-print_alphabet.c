#include <stdio.h>
/**
 * main - Lower case
 *
 * Return: Everytime 0 (success)
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar((char)a);
	}
	putchar('\n');
	return (0);
}
