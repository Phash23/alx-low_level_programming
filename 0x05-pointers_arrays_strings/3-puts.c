#include "main.h"
/**
 * _puts - prints a spring, followed by a new line, to stdot
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
