#include "main.h"
/**
* _strlen - function returns the length of a string.
* @s: input string.
* Return: (0).
*/
int _strlen(char *s)
{
int ct = 0;
while (*(s + ct) != '\0')
ct++;
return (ct);
}
