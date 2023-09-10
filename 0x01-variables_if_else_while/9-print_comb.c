#include <stdio.h>
/**
* main - prints all possible combination of single-digit numbers.
* Return: Always 0...
*/
int main(void)
{
int nu;
for (nu = 0; nu <= 9; nu++)
{
putchar((nu % 10) + '0');
if (nu == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
