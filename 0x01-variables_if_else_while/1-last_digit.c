
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main 0 Determines if a number is greater then 5, is less than 6, or is o
*
* Return: Always 0 (success)
*/
int main(void)
{
int n, l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
