#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: is the number to print
* Description: checks if a number is negative or positive
* Return: 1 if num is positive, and -1 if num is negative
*/

int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
			return (1);
	else if (n == 0)
		_putchar(48);
			return (0);
	else
		_putchar('-');
			return (-1);
}
