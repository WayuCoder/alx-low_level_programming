#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - test if the number is positive or negative;
 * Return:return 0
 */
/* betty style doc for function main goes there */
int  positive_or_negative(int n)
{
  if (n == 0)
    {
     return printf("%d is zero\n",n);
    }
  else if (n < 0)
    {
      return printf("%d is negative\n",n);
    }
  else if (n > 0)
    {
      return printf("%d is positive\n",n);
    }
  else
    return printf("undifine input");
}
