#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>


int _printf(const char *format, ...);
int _itoa(int num, char *buffer);
void conversion_spec(const char *format, va_list argList, int *numOfchar);

#endif
