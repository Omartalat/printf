#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list parg);
int print_char(va_list parg);
int print_int(va_list parg);
int print_(const char *format, unsigned int i, va_list(parg));
