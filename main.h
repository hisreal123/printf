#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>


int _printf(const char *format, ...);
void function_char(va_list argList, int *numOfchar);
void function_string(va_list argList, int *numOfchar);
void function_percent(const char *format, int *numOfchar);
void function_print(const char *format, int *numOfchar);
void function_dI(va_list argList, int *numOfchar);
int _itoa(int num, char *buffer);

#endif
