#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 *@a: array
 *@size: array size
 */
void main()
{
	int size = 5;
	int contador1 = 0;
	int perimetro = 0;

	int s[5][5] = {
		{0, 1, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{1, 1, 0, 0, 1},
		{1, 1, 1, 0, 0},
	};
	for (contador1 = 0; contador1 < size; contador++)
	{
		if ((s + contador1) == 0)
		{
			if ((s + contador + 1 == 1))
				perimetro += 1;
			if ((s + contador - 1 == 1))
				perimetro += 1;
			if ((s + contador + size + 1 == 1))
				perimetro += 1;
			if ((s + contador - size + 1 == 1))
				perimetro += 1;
		}
	printf("Perimetro = %d", perimetro);
	putchar('\n');
}
