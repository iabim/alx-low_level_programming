nclude "main.h"
/**
* print_rev - func that prints a string, in reverse, followed by a new line
* @s: declaration of s and paramters for the function
* Return: Always 0.
*/
void print_rev(char *s)
{
int r;
for (r = 0; s[r] != 0; r++)
{
}
for (r = r - 1; r >= 0; r--)
_putchar(s[r]);
_putchar('\n');
}
