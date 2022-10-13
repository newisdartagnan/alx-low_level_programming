#ifndef MAIN_H_
#define MAIN_H_

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <math.h>
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif

