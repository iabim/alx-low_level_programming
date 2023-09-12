#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times *
 * Return: void
 */
void	print_alphabet_x10(void)
{
int	li, lc;
for (li = 0; li < 10; li++)
{
for (lc = 'a'; lc <= 'z'; lc++)
{
_putchar(lc);
}
_putchar('\n');
}
}
