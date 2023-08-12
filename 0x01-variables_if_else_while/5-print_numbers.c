#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digits of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
