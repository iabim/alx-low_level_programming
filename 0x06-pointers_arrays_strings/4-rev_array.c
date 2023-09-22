#include "main.h"
/**
* reverse_array - Reverse the content of an array of integers.
* @a: Pointer to the array of integers.
* @n: Number of elements in the array.
*/
void reverse_array(int *a, int n)
{
int temp;
int i;
for (i = 0; i < n / 2; i++)
{
// Swap elements at index i and n - i - 1
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
