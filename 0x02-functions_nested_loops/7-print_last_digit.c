#include "main.h"

/**
* print_last_digit - prints the last digit of a num
* @n: digit to be checked
* Return: last digit
*/

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	_putchar(lastdigit);
	return (lastdigit);
}
