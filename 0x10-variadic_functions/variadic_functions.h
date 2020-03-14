#ifndef VARFUN_H
#define VARFUN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct estructura - estructura de numeros
 * @c: variable char type
 * @p: function pointer void type
 */
typedef struct estructura
{
	char c;
	void (*p)(va_list list);
} sct_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
