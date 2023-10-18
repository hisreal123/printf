#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _itoa(int num, char *buffer);
int _itoa_binary(int num, char *buffer);
void conversion_spec(const char *format, va_list argList, int *numOfchar);
void print_string(va_list argList, int *numOfchar);
void print_char(va_list argList, int *numOfchar);
void print_binary(va_list argList, int *numOfchar);
void print_int(va_list argList, int *numOfchar);

#endif
