#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int i;

	sum1 = 0;
	sum2 = 0;
	i = 0;

	while (i < size)
	{
		sum1 = sum1 + a[i * size + i];
		i++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

