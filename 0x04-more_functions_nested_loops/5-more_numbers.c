#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
**/
void more_numbers(void)
{
int u, t;
for (u = 0; u <= 9; u++)
{
for (t = 0; t <= 14; t++)
{
if (t >= 10)
{
_putchar((t / 10) + '0');
}
_putchar((t % 10) + '0');
}
_putchar('\n');
}
}
