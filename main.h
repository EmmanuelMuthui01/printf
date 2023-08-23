#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED


/*Standard Library Headers*/
#include <unistd.h>
#include <stdarg.h>
#include <string.h>


/*Function Declarations*/
int _printf(const char *format, ...);


/*Helper Functions Declarations*/
int print_string(char *str);
int handle_string(va_list args);
int handle_char(va_list args);
int handle_int(va_list args);
int _putchar(char c);


#endif /*MAIN_H INCLUDED*/
