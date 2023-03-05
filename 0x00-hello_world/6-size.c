#include <stdio.h>
/**
 * main - Prints the sizes of various types.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	long int  b ;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %lu bytes(s)\n", sizeof(d));
	printf("Size of an int: %lu bytes(s)\n", sizeof(a));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(b));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(c));
	printf("Size of a float: %lu bytes(s)\n", sizeof(e));
	return (0);
}
