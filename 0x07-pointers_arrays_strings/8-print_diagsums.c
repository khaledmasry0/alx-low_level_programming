#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum
 * @a: int
 * @size: int
*/

void print_diagsums(int *a, int size)
{
	int i, d = 0, d2 = 0;

	for (i = 0; i < size * size; i += (size + 1))
		d += a[i];
	for (i = size - 1; i < (size * size) - (size - 1); i += (size - 1))
		d2 += a[i];
	printf("%d, %d\n", d, d2);
}
