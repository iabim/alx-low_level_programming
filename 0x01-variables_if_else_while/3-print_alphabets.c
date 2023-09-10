#include <stdio.h>
/**
* main - prints the alphabet in lowercase, and then in uppercase
* Return: Always 0.
*/
int main(void)
{
int aph;
for (aph = 'a'; aph <= 'z'; aph++)
putchar(aph);
for (aph = 'A'; aph <= 'Z'; aph++)
putchar(aph);
putchar('\n');
return (0);
}
