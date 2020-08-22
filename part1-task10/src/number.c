
/*****************************************************************************/
/* Name:   number.c                                                          */
/*                                                                           */
/* Purpose:  Perform add operations on a natural given number                */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include "number.h"

/*
  Name:        sum_of_first_with_for

  Purpose:     Compute the sum of the first N natural numbers using for

  Params:      IN    N - number

  Returns:   a variable int
*/
int sum_of_first_with_for(int N)
{
  int sum = 0;
  int i;

  for (i = 1; i <= N; ++i)
  {
    sum += i;
  }

  return sum;
} /* sum_of_first_with_for */

/*
  Name:        sum_of_first_with_while

  Purpose:     Compute the sum of the first N natural numbers using while

  Params:      IN    N - number

  Returns:   a variable int
*/
int sum_of_first_with_while(int N)
{
  int sum = 0;
  int i = 1;

  while (i <= N)
  {
    sum += i;
    ++i;
  }

  return sum;
} /* sum_of_first_with_while */

/*
  Name:        sum_of_first_even_with_for

  Purpose:     Compute the sum of the first N natural even numbers using for

  Params:      IN    N - number

  Returns:   a variable int
*/
int sum_of_first_even_with_for(int N)
{
  int sum = 0;
  int i;

  for (i = 1; i <= N; ++i)
  {
    if (i % 2 == 0)
    {
      sum += i;
    }
  }

  return sum;
} /* sum_of_first_even_with_for */

/*
  Name:        sum_of_first_odd_with_while

  Purpose:     Compute the sum of the first N natural odd numbers using while

  Params:      IN    N - number

  Returns:   a variable int
*/
int sum_of_first_odd_with_while(int N)
{
  int sum = 0;
  int i = 1;

  while (i <= N)
  {
    if (i % 2 == 1)
    {
      sum += i;
    }
    ++i;
  }

  return sum;
} /* sum_of_first_odd_with_while */
