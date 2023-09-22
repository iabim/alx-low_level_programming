#include "main.h"
/**
* rot13 - function encodes a string using rot13
* @k: string to encode
* Return: pointer to encoded string
*/
char *rot13(char *k)
{
int a, g;
char *c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *f = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (a = 0; k[a]; a++)
{
for (g = 0; c[g]; g++)
{
if (k[a] == c[g])
{
k[a] = f[g];
break;
}
}
}
return (k);
}
