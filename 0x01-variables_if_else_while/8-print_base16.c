#include <stdio.h>
/**
* main - prints all numbers of base 16 in lowercase.
* Return: Always 0.
*/
int main(void)
{
int nu;
char aph;
for (nu = 0; nu < 10; nu++)
putchar((nu % 10) + '0');
for (aph = 'a'; aph <= 'f'; aph++)
putchar(aph);
putchar('\n');
return (0);
}

