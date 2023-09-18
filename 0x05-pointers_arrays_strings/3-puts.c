#include "main.h"
/**
* _puts - function prints a string to stdout
* @str: pointer to the string to print
*/
void _puts(char *str)
{
int st;
for (st = 0; str[st] != '\0'; st++)
{
_putchar(str[st]);
}
_putchar('\n');
}
