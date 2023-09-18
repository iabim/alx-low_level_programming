#include"main.h"
/**
* print_array - function prints n elements of an array of integers.
* @n: elements parameter input
* @a: string parameter input
* Return: (0)
*/
void print_array(int *a, int n)
{
int ea;
for (ea = 0; ea < n; ++ea)
{
if (ea != (n - 1))
printf("%d, ", a[ea]);
else
printf("%d", a[ea]);
}
printf("\n");
}
