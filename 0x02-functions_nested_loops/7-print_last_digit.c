#include "main.h"

/**
* print_last_digit - prints the last digit of a num
* @n: digit to be checked
* Return: last digit
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		n = -n;

	lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit = -lastdigit;

	_putchar(lastdigit);

	return (lastdigit);
}
