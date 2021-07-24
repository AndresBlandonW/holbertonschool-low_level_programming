#ifndef variadic_F
#define variadic_F

#include <stdarg.h>
/**
 * struct print - print
 * @type: type
 * @f: funct
 */
typedef struct print
{
	char *type;
	void (*f)(va_list);
} printall;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
