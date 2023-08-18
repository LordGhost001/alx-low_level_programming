#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digits of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}