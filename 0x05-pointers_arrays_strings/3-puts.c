#include "main.h"
#include <unistd.h>

/**
* _puts - prints a string
* @str: string to be printed
* Return: void
*/

void _puts(char *str)
{
	int l;

	l = 0;
	while ((str[l]) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
