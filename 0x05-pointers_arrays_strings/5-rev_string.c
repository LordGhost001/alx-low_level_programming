#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be printed
* Return: void
*/

void rev_string(char *s)
{
	int a;

	for (a = 0; a != '\0'; a++)
	{
	}
	for (a = a - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
