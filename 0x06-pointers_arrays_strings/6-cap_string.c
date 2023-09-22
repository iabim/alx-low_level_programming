#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @str: the string to change the first letter of a word in uppercase
* Return: capitalizes letters
*/
char *cap_string(char *str)
{
int g;
int a;
char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};
g = 0;
while (str[g] != '\0')
{
if (g == 0 && str[g] >= 97 && str[g] <= 122)
{
str[g] = str[g] - 32;
}
a = 0;
while (c[a] != '\0')
{
if (c[a] == str[g] && (str[g + 1] >= 97 && str[g + 1] <= 122))
{
str[g + 1] = str[g + 1] - 32;
}
a++;
}
g++;
}
return (str);
}
