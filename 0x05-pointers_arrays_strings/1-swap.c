#include "main.h"

/**
* swap_int - swaps the valuesof a and b
* @a: value to be swapped with b
* @b: value to be swapped with a
* Return: void
*/

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
