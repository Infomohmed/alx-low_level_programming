#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char:%lu byte(s)\n", (char) sizeof(char));
	printf("Size of an int:%lu byte(s)\n", (int) sizeof(int));
	printf("Size of a long int:%lu byte(s)\n", (long int) sizeof(long int));
	printf("Size of a long long int:%lu byte(s)\n", (long long int) sizeof(long long int));
	printf("Size of a float:%lu byte(s)\n", (float) sizeof(float));
	return (0);
}
