#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (a > 0)
	{
		printf("%d is positive");
	} else if (a < 0)
	{
		printf("%d is negative");
	} else if (a == 0)
	{
		printf("%d is zero");
	}
	return (0);
}
