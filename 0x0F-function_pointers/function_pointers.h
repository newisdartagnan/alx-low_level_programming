#ifndef FUNC_H_
#define FUNC_H_

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <math.h>
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
#endif

