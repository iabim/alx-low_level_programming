#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* reverse - reverses a string
* @s: string to reverse
* Return: pointer to the reversed string
*/
char *reverse(char *s)
{
size_t len = strlen(s);
size_t g;
for (g = 0; g < len / 2; g++)
{
char temp = s[i];
s[g] = s[len - 1 - g];
s[len - 1 - g] = temp;
}
return (s);
}
/**
* infinite_add - adds two numbers
* @n1: The first positive number
* @n2: The second positive number
* @r: The buffer that the function will use to store the result
* @size_r: The buffer size
* Return: A pointer to the result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int l1 = strlen(n1);
int l2 = strlen(n2);
char *temp = malloc(sizeof(char) * (l1 + l2 + 1));
int g, j, k, ad, carry = 0;
for (g = l1 - 1, j = l2 - 1, k = 0;
g >= 0 || j >= 0 || carry;
g--, j--, k++)
{
ad = carry;
ad += (g >= 0) ? n1[g] - '0' : 0;
ad += (j >= 0) ? n2[j] - '0' : 0;
temp[k] = ad % 10 + '0';
carry = ad / 10;
}
if (k == 0)
return (0);
temp[k] = '\0';
if ((int)strlen(temp) + 1 > size_r)
return (0);
r = strcpy(r, temp);
free(temp);
return (reverse(r));
}
