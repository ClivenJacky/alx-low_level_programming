#include <stdlib.h>
#include <tine.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and print it
 * Return: Always 0 (Success)
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%d is positive\n" , n);
	else if (n == 0)
		printf("%d is zero\n" , n);
	else if (n < 0)
		printf("%d is negetive\n" , n);
	return (0)
}
