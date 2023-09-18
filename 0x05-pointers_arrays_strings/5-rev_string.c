#include "main.h"
/**
* rev_string - function reverse a string
* @s: char array string type
*/
void rev_string(char *s)
{
int r, c, l;
char h;
for (r = 0; s[r] != '\0'; r++)
;
l = r;
for (r--, c = 0; c < l / 2; r--, c++)
{
h = s[c];
s[c] = s[r];
s[r] = h;
}
}
