#include "main.h"
/**
* print_number function prints an integer
* @n: integer to print
* Return: (0)
*/
void print_number(int n)
{
unsigned int g;
if (n < 0)
{
_putchar('-');
g = -n;
}
else
g = n;
if (g / 10)
print_number(g / 10);
_putchar(g % 10 + '0');
}
