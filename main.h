#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int _intoa(int num, char *buffer);
int _intoa_binary(int num, char *buffer);
void conversion_spec(const char *format, va_list argList, int *numOfchar);
void print_string(va_list argList, int *numOfchar);
void print_char(va_list argList, int *numOfchar);
void print_binary(va_list argList, int *numOfchar);
void print_int(va_list argList, int *numOfchar);
void print_rot13(va_list argList, int *numOfchar);
void print_rev(va_list argList, int *numOfchar);
void print_pointer(va_list argList, int *numOfchar);

#endif
