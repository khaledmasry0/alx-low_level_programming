#include "main.h"

/**
 *_print_rev_recursion - prints a str in reverse
 *@s: str of chars
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
