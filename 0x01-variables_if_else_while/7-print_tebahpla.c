#include <stdio.h>
/**
* main - print the lowercase alphabet in reverse.
* Return: Always 0.
*/
int main(void)
{
int raph;
for (raph = 'z'; raph >= 'a'; raph--)
putchar(raph);
putchar('\n');
return (0);
}
