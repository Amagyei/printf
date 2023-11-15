#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int ptch(char c);
int _printf(const char *format, ...);
int p_str(char *s);
int p_int(int n);
int p_uint(unsigned int n);
int p_bin(unsigned int n);




#endif
