#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints the last digit of n and prints out whether
 * it is greater than 5, 0 or less than 6 and not 0
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	printf("last digit of %i is %i and is ", n, lastDigit);
	if (lastDigit > 5)
		printf("greater than 5\n");
	else if (lastDigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
