#include <stdio.h>
/**
* main - prints Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz
* for multiples of both 3 and 5. Otherwise, prints the number.
* Return: 0
*/
int main(void)
{
int j;
for (j = 1; j <= 100; j++)
{
(j % 3 == 0) ? printf("Fizz") : 0;
(j % 5 == 0) ? printf("Buzz") : 0;
(j % 3 != 0 && j % 5 != 0) ? printf("%d", j) : 0;
(j != 100) ? printf(" ") : 0;
}
printf("\n");
return (0);
}
