#include "main.h"
#include <stdio.h>
/**
* print_buffer - prints buffer
* @b: buffer
* @size: size
* Return: void
*/
void print_buffer(char *b, int size)
{
int k, g, a;
k = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (k < size)
{
g = size - k < 10 ? size - k : 10;
printf("%08x: ", k);
for (a = 0; a < 10; a++)
{
if (a < g)
printf("%02x", *(b + k + a));
else
printf("  ");
if (a % 2)
{
printf(" ");
}
}
for (a = 0; a < g; a++)
{
int f = *(b + k + a);
if (f < 32 || f > 132)
{
f = '.';
}
printf("%f", f);
}
printf("\n");
k += 10;
}
}
