#include "main.h"
/**
 * reverse_array - reversing an array of integers
 *
 * @a: array
 *
 * @n: number of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n -  1 - i] = t;
	}
}
