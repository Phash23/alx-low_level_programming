#include <stdio.h>
/**
 * main - Single digit
 *
 * Return: Everytime 0 (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d", numbers);
	}
	putchar('\n');
	return (0);
}
