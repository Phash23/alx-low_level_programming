#include "main.h"
/**
 * print_array - funtion that print n element of an array
 * @a: name of array
 * @n: numbers of the element of the array to be printed
 * Return: a add n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
