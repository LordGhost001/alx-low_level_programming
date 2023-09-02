#include <stdio.h>
#include "main.h"

/**
* print_array - update value
* @a: array to be evaluated
* @n: index of the array
* Return: void
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
