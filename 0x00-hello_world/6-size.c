#include <stdio.h>

/**
 * main - Entry point
 * Description: prints size of char, int, long int, long long int and float
 * Return: Always 0 (Success)
 */

int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;

	printf("Size of a char: %zu byte(s)\n", sizeof(v));
	printf("Size of a int: %zu byte(s)\n", sizeof(w));
	printf("Size of a long int: %zu byte(s)\n", sizeof(x));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(y));
	printf("Size of a float: %zu byte(s)\n", sizeof(z));
	return (0);
}
