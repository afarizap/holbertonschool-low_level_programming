#include "variadic_functions.h"
/**
 *caracter - function that prints character of list
 *@lista: name of list
 */
void caracter(va_list lista)
{
	printf("%c", va_arg(lista, int));
}
/**
 *entero - function that prints entero of list
 *@lista: name of list
 */
void entero(va_list lista)
{
	printf("%d", va_arg(lista, int));
}
/**
 *flotante - function that prints float of list
 *@lista: name of list
 */
void flotante(va_list lista)
{
	printf("%f", va_arg(lista, double));
}
/**
 *charpuntero - function that prints charpointer of list
 *@lista: name of list
 */
void charpuntero(va_list lista)
{
	char *punterin;

	punterin = va_arg(lista, char *);
	if (!punterin)
		punterin = "(nil)";
	printf("%s", punterin);

}
/**
 * print_all - print some words :v
 * @format: function pointer.
 * struct estructura  - asd
 */
void print_all(const char * const format, ...)
{
	char *comita = "";
	unsigned int i, j;
	va_list list;
	sct_t estructura[] = {
		{'c', caracter},
		{'i', entero},
		{'f', flotante},
		{'s', charpuntero}
	};

	va_start(list, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while ((estructura[j].c))
		{
			if (estructura[j].c == format[i])
			{
				printf("%s", comita);
				estructura[j].p(list);
				comita = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
