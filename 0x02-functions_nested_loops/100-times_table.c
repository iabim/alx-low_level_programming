#include "main.h"
/**
* print_times_table - Prints the times table of the input,
* starting with 0.
*@n: The value of the times table to be printed.
*/
void print_times_table(int n)
{
int nu, mu, ro;
if (n >= 0 && n <= 15)
{
for (nu = 0; nu <= n; nu++)
{
_putchar('0');
for (mu = 1; mu <= n; mu++)
{
_putchar(',');
_putchar(' ');
ro = nu * mu;
if (ro <= 99)
_putchar(' ');
if (ro <= 9)
_putchar(' ');
if (ro >= 100)
{
_putchar((ro / 100) + '0');
_putchar(((ro / 10)) % 10 + '0');
}
else if (ro <= 99 && ro >= 10)
{
_putchar((ro / 10) + '0');
}
_putchar((ro % 10) + '0');
}
_putchar('\n');
}
}
}
