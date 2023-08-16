#include "main.h"

/**
*print_alphabet_x10 - prints lowercase alphabets 10 times
*Description: prints lowercase alphabets 10 times
*Return: 0
*/

void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 1; n < 11; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
