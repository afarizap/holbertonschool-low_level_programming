#include <stdio.h>

int main (void)

{
	int i = 0, j = 0, n = 5, f, c, m;

	m = 2 * n;
	f = n - i;
	c = n - j;

        while(i < 'm')
        {
		printf(f);
		while(j < 'm')
		{
			printf(c);
			j++;
		}
		i++;
        }
	return (0);
}
