
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** main 0 Determines if a number is positive, negative or zero */
int main(void)
{
int n, l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (1 > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, 1);
}
else if (1 == 0)
{
printf("last digit of %d is and is 0\n", n, 1);
}
else
{
printf("last digit of %d and is less than 6 and not 0\n", n, 1);
}
return (0);
}
