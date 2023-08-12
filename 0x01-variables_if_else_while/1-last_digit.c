#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 * Description: checks for the last digit of n
 * @l_digit: finds the last digit of n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);
	return (0);
}