#include"main.h"
/**
* puts2 - function prints every character of a string
* @str: string parameter input
* Return: 0
*/
void puts2(char *str)
{
int pri;
for (pri = 0; str[pri] != '\0'; ++pri)
{
if (pri % 2 == 0)
_putchar(str[pri]);
}
_putchar('\n');
}
