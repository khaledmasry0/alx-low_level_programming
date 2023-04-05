#include "main.h"

/**
 * _sqrt_recursion - find natural srt
 * @n: int
 * @val: srt
 * Return: int
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find srt
 * @n: int to find srt
 * @val: srt
 * Return: int
 */

int square(int n, int val)
{
if (val * val == n)
	return (val);
else if (val * val < n)
	return  (square(n, val + 1));
else
	return (-1);
}
