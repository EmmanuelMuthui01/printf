#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);

/* helper functions */
int print_string(char *str);
int handle_string(va_list args);
int handle_char(va_list args);

#endif
