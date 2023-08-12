#include <stdio.h>

/**
 * main - Entry point
 * Description: prints lowercase and uppercase alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	d = 'A'
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}
