#include "main.h"
/**
* _strncat - function concatenate two strings
* using at most n bytes from src
* @dest: input value
* @src: input value
* @n: input value
* Return: (0)
*/
char *_strncat(char *dest, char *src, int n)
{
int a;
int g;
a = 0;
while (dest[a] != '\0')
{
a++;
}
g = 0;
while (g < n && src[g] != '\0')
{
dest[a] = src[g];
a++;
g++;
}
dest[a] = '\0';
return (dest);
}
