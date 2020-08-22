
/*****************************************************************************/
/* Name:   main.c                                                            */
/*                                                                           */
/* Purpose:   Perform add operations on the first natural numbers            */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "number.h"

int main(int argc, char **argv)
{
  int N;

  printf("Enter the number: ");
  scanf("%d", &N);

  printf("Sum with for: %d\n", sum_of_first_with_for(N));
  printf("Sum with while: %d\n", sum_of_first_with_while(N));
  printf("Sum with for on even numbers: %d\n", sum_of_first_even_with_for(N));
  printf("Sum with while on odd numbers: %d\n", sum_of_first_odd_with_while(N));

  return 0;
} /* main */
