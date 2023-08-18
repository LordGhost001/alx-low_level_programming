#include "main.h"

/**
* _isalpha - checks if char is a letter
* @c: is the character to check
* Return: 1 if alphabet and 0 otherwise
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
