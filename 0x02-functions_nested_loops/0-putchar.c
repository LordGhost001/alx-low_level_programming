#include "main.h"

/**
*main - Entry point
*@_putchar: writes a string to std out
*Return: Always 0 (Success)
*/

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
