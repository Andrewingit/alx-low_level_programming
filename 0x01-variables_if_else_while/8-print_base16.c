#include <stdio.h>
/**
*main - print if the number is postive, zero, or negative
*
*Description: using the main function
*this programs prints "Programming is postive, zero, or negative
* Return:0
*/
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a'; <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
