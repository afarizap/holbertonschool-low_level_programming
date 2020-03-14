#include "variadic_functions.h"

void caracter(va_list lista)
{
	printf("%c", va_arg(lista, int));
}
void entero(va_list lista)
{
	printf("%d", va_arg(lista, int));
}
void flotante(va_list lista)
{
	printf("%f", va_arg(lista, double));
}
void charpuntero(va_list lista)
{
	printf("%s", va_arg(lista, char *));
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list list;
	struct_t estructura[] = {
		{"c", caracter},
		{"i", entero},
		{"f", flotante},
		{"s", charpuntero},
		{NULL, NULL}
	};
	va_start(list, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while ((estructura[j].c))
		{
			if ((*estructura[j].c) == format[i])
			{
				(*estructura[j].p)(list);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
