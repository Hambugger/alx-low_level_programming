#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: The last digits
 * Return: 0
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;
	if (s > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (s == 0)
		printf(" Last digit of %d is %d and is 0\n", n, m);
	if (s < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
