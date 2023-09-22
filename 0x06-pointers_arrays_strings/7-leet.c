#include "main.h"
/**
* leet - encodes a string
* @str: the string to encode
* Return: the encode string
*/
char *leet(char *str)
{
int a, g;
char c[] = "aAeEoOtTlL";
char n[] = "4433007711";
a = 0;
while (str[a] != '\0')
{
g = 0;
while (c[g] != '\0')
{
if (str[a] == c[g])
{
str[a] = n[g];
}
g++;
}
a++;
}
return (str);
}
