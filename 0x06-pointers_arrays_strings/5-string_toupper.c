#include "main.h"
/**
* _islower - checks for lowercase character
* @c: character to check
* Return: (0)
*/
static int _islower(int g)
{
return (g >= 'a' && g <= 'z');
}
char *string_toupper(char *s)
{
int a;
for (a = 0; s[a]; ++a)
_islower(s[a]) ? s[a] -= 32 : s[a];
return (s);
}
