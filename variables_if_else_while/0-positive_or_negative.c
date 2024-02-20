#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determine if a random number is positive, negative or zero.
 *
 * Description: using the main function
 * this program prints "programing is positive, zero, or negative
 * Return: 0 on success
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
