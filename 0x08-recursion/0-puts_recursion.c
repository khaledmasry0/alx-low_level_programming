#include "main.h"

/**
 * _puts_recursion - print str
 * *@S: str of character
 * Return: void
*/

void _puts_recursion(char *S)
{
	if (*S == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
