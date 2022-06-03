
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* determines if the number is greater than 5, is less than 6 or 0 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("\nThe last digit of %d is %d and is greater then 5:\n,n);
}
if (n == 0)
{
printf("\nThe last digit of %d is 0 \n", n);
}
if (n < 6, n != 0)
{
printf("\nThe last digit of %d is %d and less than 6 and not 0 \n", n);
}
return (n % 10);
}
