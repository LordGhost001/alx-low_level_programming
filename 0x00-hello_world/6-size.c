#include <stdio.h>

/**
 * main - prints size of various types on the computer
 * Description: prints size of char, int, long int, long long int and float
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;
	printf("Size of a char: %zu byte(s)", sizeof(i));
	printf("Size of a int: %zu byte(s)", sizeof(j));
	printf("Size of a long int: %zu byte(s)", sizeof(k));
	printf("Size of a long long int: %zu byte(s)", sizeof(l));
	printf("Size of a float: %zu byte(s)", sizeof(m));
	return (0);
}
