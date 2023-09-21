#include "main.h"
/**
* _strncat - concatenate two strings using at most n bytes from src
* @dest: pointer to the destination string
* @src: pointer to the source string
* @n: maximum number of bytes to concatenate from src
* Return: pointer to the resulting destination string
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int src_len = 0;
// Find the length of the destination string
while (dest[dest_len] != '\0')
{
dest_len++;
}
// Find the length of the source string, up to a maximum of n bytes
while (src_len < n && src[src_len] != '\0')
{
src_len++;
}
// Concatenate at most n bytes from src to dest
for (int i = 0; i < src_len; i++)
{
dest[dest_len + i] = src[i];
}
// Null-terminate the resulting string
dest[dest_len + src_len] = '\0';
return dest;
}
