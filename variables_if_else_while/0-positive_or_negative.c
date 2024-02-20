#include <stdlib.h>
#include <time.h>
#include <stdio.H>

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
  /* your code goes there */
  if (n < 0)
  {
    printf("%d is %s\n", n,  "negative");
  }
  else if (n > 0)
  {
    printf("%d is %s\n", n, "positive");
  }
  else
  {
    printf("%d is %s\n", n, "zero");
  }
  return (0);
}
