#ifndef VARFUN_H
#define VARFUN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct estructura
{
	char *c;
	void (*p)(va_list list);
} struct_t;
#endif
