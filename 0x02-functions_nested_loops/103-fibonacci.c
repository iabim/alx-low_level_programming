#include <stdio.h>
/**
* main - Prints the sum of even-valued Fibonacci sequence
* terms not exceeding 4000000.
* Return: Always 0.
*/
int main(void)
{
unsigned long fb1 = 0, fb2 = 1, fbs;
float tot_sum;
while (1)
{
fbs = fb1 + fb2;
if (fbs > 4000000)
break;
if ((fbs % 2) == 0)
tot_sum += fbs;
fb1 = fb2;
fb2 = fbs;
}
printf("%.0f\n", tot_sum);
return (0);
}
