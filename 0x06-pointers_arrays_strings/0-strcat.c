#include "main.h"
/**
* custom_string_concat - concatenates two strings
* @dest: pointer to the destination string
* @src: pointer to the source string
* Return: pointer to the concatenated destination string
*/
char *_strcat(char *dest, char *src)
{
char *result = dest; // Store the start of the destination string
// Find the end of the destination string
while (*dest != '\0')
{
dest++;
}
// Copy the source string to the end of the destination string
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
// Null-terminate the concatenated string
*dest = '\0';
return result; // Return a pointer to the start of the concatenated string
}
