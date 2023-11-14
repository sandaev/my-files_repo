#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _strlen(char *s);
int _putchar(char c);
int _strlenc(const char *s);
int printchar(va_list chr);
int printstr(va_list str);
int print_perc(void);
int print_int(va_list nums);
int print_dec(va_list nums);
int _printf(const char *format, ...);
int _exp(int, int);
int digits(int);
int print_bin(unsigned int);
/*int print_int(int);*/

#endif /* MAIN_H */
