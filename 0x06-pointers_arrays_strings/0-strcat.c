#include "main.h"
/**
* _strcat - function concatenates two strings
* @dest: input value
* @src: input value
* Return: (0)
*/
char *_strcat(char *dest, char *src)
{
int a;
int g;
a = 0;
while (dest[a] != '\0')
{
a++;
}
g = 0;
while (src[g] != '\0')
{
dest[a] = src[g];
a++;
g++;
}
dest[a] = '\0';
return (dest);
}
