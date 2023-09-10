#include <stdio.h>
/**
* main - prints the alphabet in lowercase, 
* followed by a new line, except q and e
* Return: Always 0...
*/
int main(void)
{
char aph = 'a';
while (aph <= 'z')
{
if (aph != 'e' && aph != 'q')
{
putchar(aph);
}
aph++;
}
putchar('\n');
return (0);
}
