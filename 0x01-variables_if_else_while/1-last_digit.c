#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	printf("Last digit of %d is %d and is greater than 5", n, lastDigit)

	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is %d", n, lastDigit, lastDigit)
	}

	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lasDigit)
	}
	return (0);
{
