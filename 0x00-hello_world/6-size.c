#include <stdio.h>

/**
 * main -Entry point
 * Return: Always (Success)
 */

int main(void)
{
	printf("Size of char: %zu byte(s0\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
