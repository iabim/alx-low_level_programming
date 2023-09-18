#include "main.h"
/**
* puts_half - function prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: (0)
*/
void puts_half(char *str)
{
int h, f, ph;
ph = 0;
for (h = 0; str[h] != '\0'; h++)
ph++;
f = (ph / 2);
if ((ph % 2) == 1)
f = ((ph + 1) / 2);
for (h = f; str[h] != '\0'; h++)
_putchar(str[h]);
_putchar('\n');
}
