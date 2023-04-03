#include "main.h"

/**
 * _memset - function fill the first @n bytes of
 * the area pointed
 * @s: pointer
 * @b: constant
 * @n: maxbytes
 * Return: a pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
	}
	return (s);
}
