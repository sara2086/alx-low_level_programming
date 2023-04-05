#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */
void _puts_recursion(char *i)
{
	if (*i != '\0')
	{
		_putchar(*i);
		_puts_recursion(i + 1);
	}
	else
		_putchar('\n');
}
