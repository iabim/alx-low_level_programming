#include <stdio.h>
/**
* main - prints all single digit numbers
* Return: Always 0.
*/
int main(void)
{
int nu;
for (nu = 0; nu < 10; nu++)
putchar((nu % 10) + '0');
putchar('\n');
return (0);
}
