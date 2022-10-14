#include "variadic_functions.h"  
#include <stdarg.h>
#include <stdio.h>


/**
*print_numbers - prints numbers, followed by a new line.
*@separator: separator to print between numbers
*@n: number of numbers to print
*@...: a variable of numbers
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;

va_start(nums, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));
if (index != (n -1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
