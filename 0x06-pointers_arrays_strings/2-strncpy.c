#include "main.h"
/**
* _strncpy - Copy a string with a specified number of bytes
* @dest: Pointer to the destination buffer
* @src: Pointer to the source string
* @n: Maximum number of bytes to copy
* Return: Pointer to the copied string in the destination buffer
*/
char *_strncpy(char *dest, const char *src, int n)
{
int index;
for (index = 0; index < n && src[index] != '\0'; index++)
{
dest[index] = src[index];
}
for (; index < n; index++)
{
dest[index] = '\0';
}
return dest;
}
